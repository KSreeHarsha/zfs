#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0xc467293b, "kmem_free_debug" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde0bdcff, "memset" },
	{ 0xea147363, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xd1fe48c6, "spl_debug_bug" },
	{ 0x4958b7b5, "spl_setup" },
	{ 0x82fe53e1, "ddi_strtol" },
	{ 0xddd4a3d3, "xdrmem_create" },
	{ 0xa3a5be95, "memmove" },
	{ 0x998a6617, "kmem_alloc_debug" },
	{ 0x1f4eafab, "spl_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl";


MODULE_INFO(srcversion, "1C3476B7A9674C45B92A649");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 3,
};
