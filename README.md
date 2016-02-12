# Pub

Guys, this is my nerd way to invite you to drink beers. =)

Happy Hacking!!!

## Requeriments

 * Linux
 * GCC

## Cloning the project

```
$ git clone https://github.com/patito/pub.git
$ cd pub
```

## Compiling

```
$ make

make -C /lib/modules/4.2.0-16-generic/build M=/home/paulo/Downloads/pub modules
make[1]: Entering directory '/usr/src/linux-headers-4.2.0-16-generic'
  CC [M]  /home/paulo/Downloads/pub/pub.o
  Building modules, stage 2.
  MODPOST 1 modules
  CC      /home/paulo/Downloads/pub/pub.mod.o
  LD [M]  /home/paulo/Downloads/pub/pub.ko
make[1]: Leaving directory '/usr/src/linux-headers-4.2.0-16-generic'
```

## Finding the pub

```
# insmod pub.ko
```

```
# dmesg | tail

[ 3997.210838] Event: Paulo is leaving [Aleluia]
[ 3997.210839] Location: Brewdog
[ 3997.210840] When: 12/02/2016
[ 3997.210840] Time: 17:30
```

## Going Home Drunk

```
# rmmod pub
```

```
# dmesg | tail

[ 4065.573642] I lov u all, Uu live in my heart and don't pay rent!!!
```



## License

```
/*
 * "THE BARBECUE-WARE LICENSE" (Revision 1):
 *
 * <benatto@gmail.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can make me a brazilian barbecue, including beers
 * and caipirinha in return to Paulo Leonardo Benatto.
 *
 * The quality of the barbecue depends on the amount of beer that has been
 * purchased.
 */
```

## Contact

If you see something wrong just send me a message, and I will fix it as soon as possible. Just to be clear `You suck Hobbit` is not a good message.

```
$ echo "moc.liamg@ottaneb" | rev
```

## Reference

 * [tldp](http://www.tldp.org/LDP/lkmpg/2.6/html/x181.html)
