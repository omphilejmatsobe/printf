#include "main.h"
/**
 * print_non_printable - Prints ascii codes in hexa
 * @types: input arguments
 * @buffer: Buffer array
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = 0, offset = 0;
	char *str = va_arg(types, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[x] != '\0')
	{
		if (is_print(str[x]))
			buffer[x + offset] = str[x];
		else
			offset += _hexa(str[x], buffer, x + offset);

		x++;
	}

	buffer[x + offset] = '\0';

	return (write(1, buffer, x + offset));
}
