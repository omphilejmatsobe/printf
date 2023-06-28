#include "main.h"
/**
 * print_char - Print a char
 * @types: input list arguments
 * @buffer: Buffer array
 * @flags:  input number of flags
 * @width: Width
 * @precision: Precision specifier
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (_write(c, buffer, flags, width, precision, size));
}
