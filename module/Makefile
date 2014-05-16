subdir-m += avl
subdir-m += nvpair
subdir-m += unicode
subdir-m += zcommon
subdir-m += zfs
subdir-m += zpios

INSTALL_MOD_DIR ?= extra

ZFS_MODULE_CFLAGS += -include /root/ZFS_source/spl/spl_config.h
ZFS_MODULE_CFLAGS += -include /root/ZFS_source/zfs/zfs_config.h
ZFS_MODULE_CFLAGS += -I/root/ZFS_source/zfs/include -I/root/ZFS_source/spl/include -I/root/ZFS_source/spl
export ZFS_MODULE_CFLAGS

modules:
	@# Make the exported SPL symbols available to these modules.
	@# They may be in the root of SPL_OBJ when building against
	@# installed devel headers, or they may be in the module
	@# subdirectory when building against the spl source tree.
	@if [ -f /root/ZFS_source/spl/Module.symvers ]; then \
		/bin/cp /root/ZFS_source/spl/Module.symvers .; \
	elif [ -f /root/ZFS_source/spl/module/Module.symvers ]; then \
		/bin/cp /root/ZFS_source/spl/module/Module.symvers .; \
	else \
		echo -e "\n" \
		"*** Missing spl symbols ensure you have built the spl:\n" \
		"*** - /root/ZFS_source/spl/Module.symvers, or\n" \
		"*** - /root/ZFS_source/spl/module/Module.symvers\n"; \
		exit 1; \
	fi
	$(MAKE) -C /usr/src/kernels/2.6.32-279.14.1.el6.x86_64 SUBDIRS=`pwd`  CONFIG_ZFS=m $@

clean:
	@# Only cleanup the kernel build directories when CONFIG_KERNEL
	@# is defined.  This indicates that kernel modules should be built.
	$(MAKE) -C /usr/src/kernels/2.6.32-279.14.1.el6.x86_64 SUBDIRS=`pwd`  $@

	if [ -f Module.symvers ]; then $(RM) Module.symvers; fi
	if [ -f Module.symvers ]; then $(RM) Module.symvers; fi
	if [ -f Module.markers ]; then $(RM) Module.markers; fi

modules_install:
	@# Install the kernel modules
	$(MAKE) -C /usr/src/kernels/2.6.32-279.14.1.el6.x86_64 SUBDIRS=`pwd` $@ \
		INSTALL_MOD_PATH=$(DESTDIR)$(INSTALL_MOD_PATH) \
		INSTALL_MOD_DIR=$(INSTALL_MOD_DIR)
	@# Remove extraneous build products when packaging
	kmoddir=$(DESTDIR)$(INSTALL_MOD_PATH)/lib/modules/2.6.32-279.14.1.el6.x86_64; \
	if [ -n $$kmoddir ]; then \
		find $$kmoddir -name 'modules.*' | xargs $(RM); \
	fi
	sysmap=$(DESTDIR)$(INSTALL_MOD_PATH)/boot/System.map-2.6.32-279.14.1.el6.x86_64; \
	if [ -f $$sysmap ]; then \
		depmod -ae -F $$sysmap 2.6.32-279.14.1.el6.x86_64; \
	fi

modules_uninstall:
	@# Uninstall the kernel modules
	kmoddir=$(DESTDIR)$(INSTALL_MOD_PATH)/lib/modules/2.6.32-279.14.1.el6.x86_64
	list='$(subdir-m)'; for subdir in $$list; do \
		$(RM) -R $$kmoddir/$(INSTALL_MOD_DIR)/$$subdir; \
	done

distdir:

distclean maintainer-clean: clean
install: modules_install
uninstall: modules_uninstall
all: modules
check:
