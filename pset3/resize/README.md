


# Resize

*Link to Problem set 3 -> Resize:
https://docs.cs50.net/2019/x/psets/3/resize/less/resize.html*

Implement a program that resizes BMPs, per the below.

```
$ ./resize 4 small.bmp large.bmp
```

## Background

Be sure you’re familiar with the structure of 24-bit uncompressed BMPs, as introduced in  [Whodunit](https://docs.cs50.net/2018/x/psets/4/whodunit/whodunit).



## Specification

Implement a program called  `resize`  that resizes (i.e., enlarges) 24-bit uncompressed BMPs by a factor of  `n`.

-   Implement your program in a file called  `resize.c`  in a directory called  `resize`.
    
-   Your program should accept exactly three command-line arguments, whereby
    
    -   the first (`n`) must be a positive integer less than or equal to  `100`,
        
    -   the second must be the name of a BMP to be resized, and
        
    -   the third must be the name of the resized version to be written.
        
    
    + If your program is not executed with such, it should remind the user of correct usage, as with  `fprintf`  (to  `stderr`), and  `main`should return  `1`.
    
-   Your program, if it uses  `malloc`, must not leak any memory.
    

## Usage

Your program should behave per the examples below. Assumed that the underlined text is what some user has typed.

```
$ ./resize
Usage: ./resize n infile outfile
$ echo $?
1
```

```
$ ./resize 2 small.bmp larger.bmp
$ echo $?
0
```
