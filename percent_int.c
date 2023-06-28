#include "main.h"
/**
 * print_percent - Prints a percent sign
 * @types: input list arguments
 * @buffer: Buffer array
 * @flags:  input flags
 * @width: gets width.
 * @precision: Precision
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}

/**
 * print_int - Print int
 * @types: input list arguments
 * @buffer: input Buffer array
 * @flags:  Calculates flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	int _neg = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	n = size_conv(n, size);

	if (n == 0)
		buffer[x--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		_neg = 1;
	}

	while (num > 0)
	{
		buffer[x--] = (num % 10) + '0';
		num /= 10;
	}

	x++;

	return (int_number(_neg, x, buffer, flags, width, precision, size));
	
}
