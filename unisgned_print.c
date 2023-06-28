#include "main.h"

/**
 * print_unsigned - Prints an unsigned number
 * @types: input arguments
 * @buffer: input Buffer array
 * @flags:  input flags
 * @width: get width
 * @precision: Precision
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = unsgnd_conv(num, size);
	if (num == 0)
		buffer[x--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		buffer[x--] = (num % 10) + '0';
		num /= 10;
	}

	x++;

	return (w_unsgnd(0, x, buffer, flags, width, precision, size));
}
