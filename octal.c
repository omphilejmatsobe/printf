#include "main.h"
/**
 * print_octal - Prints in octal notation
 * @types: input list arguments
 * @buffer: input Buffer
 * @flags:  input active flags
 * @width: get width
 * @precision: Precision
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = unsgnd_conv(num, size);

	if (num == 0)
		buffer[x--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		buffer[x--] = (num % 8) + '0';
		num /= 8;
	}
	if (flags & F_HASH && init_num != 0)
		buffer[x--] = '0';

	x++;

	return (w_unsgnd(0, x, buffer, flags, width, precision, size));
}
