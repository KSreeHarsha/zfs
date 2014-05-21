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
	{ 0xe2d5255a, "strcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4958b7b5, "spl_setup" },
	{ 0x1f4eafab, "spl_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl";


MODULE_INFO(srcversion, "647D7DA1577E79BC73AD560");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 3,
};
