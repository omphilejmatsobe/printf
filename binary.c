#include "main.h"
/**
 * binary - prints a binary
 * @val: va_list argument.
 * Return: 1.
 */
int binary(va_list val)
{
	int flag, bin, x, a, b;
	unsigned int num, p;

	flag = bin = 0;
	a = 1;
	num = va_arg(val, unsigned int);

	for (x = 0; x < 32; x++)
	{
		p = ((a << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - x);
			_putchar(b + 48);
			bin++;
		}
	}
	if (bin == 0)
	{
		bin++;
		_putchar('0');
	}
	return (bin);
}
