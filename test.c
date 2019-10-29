#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "add.h"
#include "sub.h"


int a=5,b=4;
module_param(a, int, S_IRUGO);
module_param(b, int, S_IRUGO);

static int __init test_init(void)
{	

	printk("add(a,b)=%d  sub(a,b)=%d\n",add_integer(a, b), sub_integer(a, b));	
	return 0;
}

static void __exit test_exit(void)
{
	printk("###%s   %d###\n",__func__,__LINE__);
}

module_init(test_init);
module_exit(test_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chuanhua Han <cheetah0585@163.com>");
MODULE_DESCRIPTION("mul file test module");
MODULE_ALIAS("mul file module");
MODULE_VERSION("v1.0");
