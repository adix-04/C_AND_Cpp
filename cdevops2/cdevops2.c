#include<linux/module.h>
#include<linux/init.h>
#include<linux/fs.h>

static int major;
static char text [65]; 
static ssize_t myread (struct file *filep, char __user *userbuff, size_t ln, loff_t *off){
    int not_copied,delta,to_copy = (ln + *off ) < sizeof(text) ? ln : (sizeof(text) - *off);
    printk(KERN_INFO "Cdevops2:read called. . . .\n");
    if(*off >= sizeof(text))
            return 0;
    
    not_copied = copy_to_user(userbuff , &text[*off] , to_copy);
    delta = to_copy - not_copied;
    if(not_copied)
            printk(KERN_WARNING "Cdevops2 :only copied %d bytes",delta);
    *off += delta;
   
    return delta;
}
static ssize_t mywrite (struct file *filep, const char __user *userbuff, size_t ln, loff_t *off){
    int not_copied,delta,to_copy = (ln + *off ) < sizeof(text) ? ln : (sizeof(text) - *off);
    printk(KERN_INFO "Cdevops2:write called. . . .\n");
    if(*off >= sizeof(text))
            return 0;
    
    not_copied = copy_from_user( &text[*off] , userbuff , to_copy);
    delta = to_copy - not_copied;
    if(not_copied)
            printk(KERN_WARNING "Cdevops2 :only copied %d bytes",delta);
    *off += delta;
    return delta;
}
static struct  file_operations fops={
    .read = myread,
    .write = mywrite

};
static int __init myinit(void)
{
   major = register_chrdev(0,"char device",&fops);
   if(major < 0){
    printk("Cdev:error registering device. . . .\n");
    return major;
   }
   printk("Cdev :entering kernal major number = %d. . . . .\n",major);
   return 0;
}

static void __exit myexit(void)
{
    unregister_chrdev(major,"Cdev...\n");
    printk("Cdev:exiting  .. . . . ..\n");
}
module_init(myinit);
module_exit(myexit);

MODULE_AUTHOR("adin");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Char device module");