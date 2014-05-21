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
	{ 0x25ec1b28, "strlen" },
	{ 0xc467293b, "kmem_free_debug" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xee8843fa, "nvpair_value_uint64" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x85f8a266, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0x9ca95a0e, "sort" },
	{ 0xd42a96fa, "nvpair_name" },
	{ 0x1bfac311, "nvlist_lookup_nvlist" },
	{ 0x5d6e0bba, "nvlist_lookup_uint64" },
	{ 0xd0920999, "nvpair_value_uint32" },
	{ 0x29c88b11, "nvlist_next_nvpair" },
	{ 0x4958b7b5, "spl_setup" },
	{ 0x9edbecae, "snprintf" },
	{ 0xec1cce40, "nvlist_lookup_nvlist_array" },
	{ 0xa3a5be95, "memmove" },
	{ 0x998a6617, "kmem_alloc_debug" },
	{ 0x3302b500, "copy_from_user" },
	{ 0xa66a6969, "nvpair_value_nvlist" },
	{ 0x1f4eafab, "spl_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl,znvpair";


MODULE_INFO(srcversion, "79E08A926E66ADA8EC02414");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 3,
};
