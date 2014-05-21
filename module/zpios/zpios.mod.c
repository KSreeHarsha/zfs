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
	{ 0xdbc2a508, "kobject_put" },
	{ 0x11d210b6, "dmu_tx_hold_free" },
	{ 0x9312865b, "dmu_objset_create" },
	{ 0x42e80c19, "cdev_del" },
	{ 0x4f1939c7, "per_cpu__current_task" },
	{ 0x5505a9b3, "dmu_object_set_blocksize" },
	{ 0xc45a9f63, "cdev_init" },
	{ 0x4d71232a, "call_usermodehelper_setfns" },
	{ 0xcde6aeae, "call_usermodehelper_exec" },
	{ 0xfcabf4b3, "dmu_tx_abort" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x67053080, "current_kernel_time" },
	{ 0xad4cbf8c, "dmu_tx_wait" },
	{ 0xc467293b, "kmem_free_debug" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x7edc1537, "device_destroy" },
	{ 0x44b9fc43, "kobject_set_name" },
	{ 0x3758301, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xe330ba71, "vmem_alloc_debug" },
	{ 0x91face46, "dmu_tx_commit" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xde0bdcff, "memset" },
	{ 0x4bf79039, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xcf08c5b6, "kthread_stop" },
	{ 0x3a78cbfe, "dmu_objset_disown" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x85f8a266, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xb87c9f5b, "vmem_free_debug" },
	{ 0xfee8a795, "mutex_lock" },
	{ 0xd1fe48c6, "spl_debug_bug" },
	{ 0x2d2cf7d, "device_create" },
	{ 0xa36dc441, "dmu_write" },
	{ 0x952664c5, "do_exit" },
	{ 0xa6d1bdca, "cdev_add" },
	{ 0x7da403ec, "dsl_destroy_head" },
	{ 0xfdf021e, "dmu_objset_own" },
	{ 0xcd48d279, "dmu_object_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xf361c1ef, "dmu_object_alloc" },
	{ 0x266c7c38, "wake_up_process" },
	{ 0x76bad8d, "dmu_tx_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xdeac3097, "call_usermodehelper_setup" },
	{ 0x4958b7b5, "spl_setup" },
	{ 0xc185e3ce, "kthread_create" },
	{ 0x236c8c64, "memcpy" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xe06bb002, "class_destroy" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x4186286a, "dmu_tx_assign" },
	{ 0x9edbecae, "snprintf" },
	{ 0x10460654, "dmu_read" },
	{ 0x998a6617, "kmem_alloc_debug" },
	{ 0xa2654165, "__class_create" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x3302b500, "copy_from_user" },
	{ 0x2fbdc8b4, "dmu_tx_hold_write" },
	{ 0x1f4eafab, "spl_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zfs,spl";


MODULE_INFO(srcversion, "E6CD9DCC62851809C196A0B");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 3,
};
