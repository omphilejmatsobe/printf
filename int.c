#include "main.h"
/**
 * inte - prints integer
 * @args: va_list argument
 * Return: number of characters printed
 */
int inte(va_list args)
{
	int n, inte, last, digit, exp, x ;

	 n = va_arg(args, int);
	 last = n % 10;
	 exp = 1;
	 x = 1;


	n = n / 10;
	inte = n;

	if (last < 0)
	{
		_putchar('-');
		inte = -inte;
		n = -n;
		last = -last;
		x++;
	}
	if (inte > 0)
	{
		while (inte / 10 != 0)
		{
			exp = exp * 10;
			inte = inte / 10;
		}
		inte = n;
		while (exp > 0)
		{
			digit = inte / exp;
			_putchar(digit + '0');
			inte = inte - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}

/**
 * pdec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int pdec(va_list args)
{
	int n, inte, last, digit;
	int i, exp;

	n = va_arg(args, int);
	last = n% 10;
	i = 1;
	exp = 1;

	n = n / 10;
	inte = n;

	if (last < 0)
	{
		_putchar('-');
		inte = -inte;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (inte / 10 != 0)
		{
			exp = exp * 10;
			inte = inte / 10;
		}
		inte = n;
		while (exp > 0)
		{
			digit = inte / exp;
			_putchar(digit + '0');
			inte = inte - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
