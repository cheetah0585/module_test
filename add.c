#include <linux/module.h>
#include "add.h"

int add_integer(int a,int b)
{
	return (a + b);
}
EXPORT_SYMBOL(add_integer);
MODULE_LICENSE("GPL");
