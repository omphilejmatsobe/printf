#include "main.h"

/**
 * _pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int _pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int i;
	int b, x;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			_putchar(s[x]);
		}
		return (x);
	}

	i = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = printf_hex_aux(i);
	return (y + 2);
}
