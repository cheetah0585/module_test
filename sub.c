#include <linux/module.h>
#include "sub.h"

int sub_integer(int a,int b)
{
	return (a - b);
}
EXPORT_SYMBOL(sub_integer);
MODULE_LICENSE("GPL");
