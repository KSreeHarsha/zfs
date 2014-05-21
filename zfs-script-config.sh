#!/bin/bash

KERNELSRC=/usr/src/kernels/2.6.32-279.14.1.el6.x86_64
KERNELBUILD=/usr/src/kernels/2.6.32-279.14.1.el6.x86_64
KERNELSRCVER=2.6.32-279.14.1.el6.x86_64
KERNELMOD=/lib/modules/${KERNELSRCVER}/kernel

SPLSRC=/usr/src/spl-0.6.2
SPLBUILD=/usr/src/spl-0.6.2/2.6.32-279.14.1.el6.x86_64
SPLSRCVER=0.6.2-38_gad3412e

SRCDIR=/root/ZFS_source/zfs
BUILDDIR=/root/ZFS_source/zfs
LIBDIR=${BUILDDIR}/lib
CMDDIR=${BUILDDIR}/cmd
MODDIR=${BUILDDIR}/module
SCRIPTDIR=${BUILDDIR}/scripts
ZPOOLDIR=${BUILDDIR}/scripts/zpool-config
ZPIOSDIR=${BUILDDIR}/scripts/zpios-test
ZPIOSPROFILEDIR=${BUILDDIR}/scripts/zpios-profile
ETCDIR=${SRCDIR}/etc

ZDB=${CMDDIR}/zdb/zdb
ZFS=${CMDDIR}/zfs/zfs
ZINJECT=${CMDDIR}/zinject/zinject
ZPOOL=${CMDDIR}/zpool/zpool
ZTEST=${CMDDIR}/ztest/ztest
ZPIOS=${CMDDIR}/zpios/zpios

COMMON_SH=${SCRIPTDIR}/common.sh
ZFS_SH=${SCRIPTDIR}/zfs.sh
ZPOOL_CREATE_SH=${SCRIPTDIR}/zpool-create.sh
ZPIOS_SH=${SCRIPTDIR}/zpios.sh
ZPIOS_SURVEY_SH=${SCRIPTDIR}/zpios-survey.sh

INTREE=1
LDMOD=/sbin/insmod

ZED_PIDFILE=${localstatedir}/run/zed.pid

KERNEL_MODULES=(                                      \
        ${KERNELMOD}/lib/zlib_deflate/zlib_deflate.ko \
        ${KERNELMOD}/lib/zlib_inflate/zlib_inflate.ko \
)

SPL_MODULES=(                                         \
        ${SPLBUILD}/module/spl/spl.ko                 \
        ${SPLBUILD}/module/splat/splat.ko             \
)

ZFS_MODULES=(                                         \
        ${MODDIR}/avl/zavl.ko                         \
        ${MODDIR}/nvpair/znvpair.ko                   \
        ${MODDIR}/unicode/zunicode.ko                 \
        ${MODDIR}/zcommon/zcommon.ko                  \
        ${MODDIR}/zfs/zfs.ko                          \
)

ZPIOS_MODULES=(                                       \
        ${MODDIR}/zpios/zpios.ko                      \
)

MODULES=(                                             \
        ${SPL_MODULES[*]}                             \
        ${ZFS_MODULES[*]}                             \
)
