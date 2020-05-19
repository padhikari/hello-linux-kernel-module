#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init hello_kernel_init(void) {
  printk(KERN_INFO "Hello, world\n");
  return 0;
}

static void __exit hello_kernel_exit(void) {
  printk(KERN_INFO "Goodbye, world \n");
}

module_init(hello_kernel_init);
module_exit(hello_kernel_exit);