# Questions

## What's `stdint.h`?

* stdlib.h is the header of the general purpose standard library of C programming language which includes functions involving memory allocation, process control, conversions and others.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

* The whole point is to write implementation-independent code.  It makes clear that you intend to use the data a specific way.
* Example: uint32_t is 32 bits wide.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

* BYTE = 1 byte = 8 bits;
* DWORD = 4 byte = 32 bits;
* LONG = 4 bytes = 32 bits;
* WORD = 2 bytes = 16 bits;

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

* The first 2 bytes of the BMP file format are the character "B" then the character "M" in ASCII encoding or 0x424d in hexadecimal.

## What's the difference between `bfSize` and `biSize`?

* bfSize: The size, in bytes, of the bitmap file.
* biSize: The number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

* The height of the bitmap, in pixels. If biHeight is positive, the bitmap is a bottom-up DIB and its origin is the lower-left corner. If biHeight is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

* biBitCount: The number of bits-per-pixel. The biBitCount member of the BITMAPINFOHEADER structure determines the number of bits that define each pixel and the maximum number of colors in the bitmap

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

* If the file is empty.

## Why is the third argument to `fread` always `1` in our code? (For example, see lines 40, 44, and 75.)

* Because it reads only (1) quantity of the size from the file pointed. We are specifiying the elements read. 

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

* Because the modulo operator has a higher precedence, it happens before the subtraction. So what you have is really

    (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4

    so you get

    (4 - (3 * 3) % 4) % 4) 

    which is

    (4 - (1)) % 4 = 3

## What does `fseek` do?

* fseek() function is used to move the file position to a desired location within the file . 
Skips over any padding and then looks for the next pixel.

## What is `SEEK_CUR`?

* The current position of the file pointer.
