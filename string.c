#include "main.h"
/**
 * _string - prints a string.
 * @val: input va_list argument.
 * Return: string length
 */
int _string(va_list val)
{
	char *s;
	int x, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
}
