#ifdef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int binary(va_list val);
int _char(va_list val);
int printf_exclusive_string(va_list val);
int aux(unsigned long int arg);
int hex(va_list arg);
int inte(va_list args);
int pdec(va_list args);
int _oct(va_list val);
int _pointer(va_list val);
int printf_tsvn(void);
int _printf(const char * const format, ...);
int _putchar(char c);
char reverse(va_list args);
int rot13(va_list args);
int _strlen(char *s);
int _string(va_list val);
int _unsigned(va_list args);

#endif
