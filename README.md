# printf?

This repository contains C program for **_printf()** function written as part of the **Low-level programming and Algorithm** project at **ALX SE program**. The program is the implementation of C language function printf() which prints the formatted output.

## Project Overview

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in the C programming language and follows the Betty coding style.

**int _printf(const char \*format, ...)**

This function produces output under the control of a *format string* that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **format string** is composed of zero or more directives:
1. Ordinary characters that are copied unchanged to the output stream. (except %)
2. Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).


The **conversion specifier:**


The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion   specifiers:

**d:**	   decimal number to be provided for printing.

**i:**	   integer to be provided for printing

**c:**	   character to be provided for printing

**s:**	...The const char * argument is expected to be a pointer to an array (pointer to a string).

**%:**	    A per cent sign '%' is written. No argument is converted.

**Return value:**

Upon success, _printf returns the number of characters printed (excluding the null byte used to end output to strings)
A negative 1 is returned if an output error is encountered.
___

**int (\*get_func(const char \*format))(va_list)**

This function is called by *_printf()* and checks for a valid conversion specifier when it finds a '%' character. The *get_func function will check for the right conversion specifier. Upon valid specifier, it returns the corresponding function.
___

**int print_char(va_list args)**

This function gets a variadic argument and prints each character of char type.
___

**int print_str(va_list args)**

This function gets a variadic argument, traverse the string, and prints a character at a time. 
___

**int print_pct(va_list args)**

This function prints a percent sign '%'.
___

**int _putchar(char c)**

writes the character c to the standard output
___

## Examples
```c
 _printf("Negative:[%d]\n", -762534);
Output:   Negative:[-762534]
```
```c
_printf("Character:[%c]\n", 'H');
Output:   Character:[H]
```
```c
_printf("Actual     : %s\n", "holberton");
Output:    Actual     : holberton
```

## Author
Omphile Matsobe
