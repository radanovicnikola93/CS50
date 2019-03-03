# Mario
*Link to problem set Mario: _[https://docs.cs50.net/2018/x/psets/1/mario/less/mario.html](https://docs.cs50.net/2018/x/psets/1/mario/less/mario.html)_*

Implement a program that prints out a half-pyramid of a specified height, per the below.

```
$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######

$ ./mario
Height: 3
  ##
 ###
####
```



## Background

Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend a "half-pyramid" of blocks before leaping (if he wants to maximize his score) toward a flag pole.

## Specification

-   Write, in a file called  `mario.c`  a program that recreates this half-pyramid using hashes (`#`) for blocks.
-   To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than  `23`. (The height of the half-pyramid pictured above happens to be  `8`.)
-   If the user fails to provide a non-negative integer no greater than  `23`, you should re-prompt for the same again.
    
-   Then, generate (with the help of  `printf`  and one or more loops) the desired half-pyramid.
    
-   Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.


## Usage

Your program should behave per the example below. Assumed that the underlined text is what some user has typed.

```
$ ./mario
Height: 4
   ##
  ###
 ####
#####
```

```
$ ./mario
Height: 0
```

```
$ ./mario
Height: -5
Height: 4
   ##
  ###
 ####
#####
```

```
$ ./mario
Height: -5
Height: five
Height: 40
Height: 24
Height: 4
   ##
  ###
 ####
#####
```
