#include "main.h"
/**
 * _unsigned - prints integer
 * @args: int argument
 * Return: int
 */
int _unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last, digit, exp, x;

	 last = n % 10;
	 exp = 1;
	 x = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');
	return (x);
}
