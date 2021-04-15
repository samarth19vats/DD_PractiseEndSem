//Samarth Vats
//CED17I020
#include<linux/module.h>
static int num = 8;

int init_module(void)
{
    printk("Greetings! The module is inserted.\n");
    printk("Value entered is: %d\n",num);
    return 0;
}

void cleanup_module(void)
{
    printk("Prompt! The module is removed.\n");
}

module_param(num,int,0);
MODULE_LICENSE("GPL");