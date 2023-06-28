#include "main.h"

/**
 * print_binary - Prints an unsigned number
 * @types: input arguments
 * @buffer: Buffer arra
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision
 * @size: Size specifier
 * Return: Numbers of char printed.
 */
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int x, y, i, sum;
	unsigned int a[32];
	int c;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	x = va_arg(types, unsigned int);
	y = 2147483648; /* (2 ^ 31) */
	a[0] = x / y;
	for (i = 1; i < 32; i++)
	{
		y /= 2;
		a[i] = (x / y) % 2;
	}
	for (i = 0, sum = 0, c = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			c++;
		}
	}

	return (c);
}
