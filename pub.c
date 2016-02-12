/*
 * "THE BARBECUE-WARE LICENSE" (Revision 1):
 *
 * <paulo@brandwatch.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can make me a brazilian barbecue, including beers
 * and caipirinha in return to Paulo Leonardo Benatto.
 *
 * The quality of the barbecue depends on the amount of beer that has been
 * purchased.
 */

#include <linux/module.h>    
#include <linux/kernel.h>    
#include <linux/init.h>      

MODULE_LICENSE("Barbecue-Ware License");
MODULE_AUTHOR("Paulo Leonardo Benatto");
MODULE_DESCRIPTION("Thank you everything Brandwatch...");

static int __init pub_init(void)
{
    pr_alert("Event: Paulo is leaving [Aleluia]\n");
    pr_alert("Location: Brewdog\n");
    pr_alert("When: 12/02/2016\n");
    pr_alert("Time: 17:30\n");

    return 0;    
}

static void __exit pub_cleanup(void)
{
    pr_alert("I lov u all, Uu live in my heart and don't pay rent!!!\n");
}

module_init(pub_init);
module_exit(pub_cleanup);
