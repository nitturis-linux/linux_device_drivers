#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void)
{
	printk(KERN_ERR " I am shiva the great\n");
	return 0;
}

static int hello_exit(void)
{
	printk(KERN_ERR " I am Shiva good day\n");
	return 0;	
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Shiva");
MODULE_DESCRIPTION(" Just a Check");
