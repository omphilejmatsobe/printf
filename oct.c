#include "main.h"
/**
 * oct - prints an octal number.
 * @val: va_list arguments
 * Return: c
 */
int _oct(va_list val)
{
	int i, *arr, c;
	unsigned int num, temp;

	num = va_arg(val, unsigned int);
	c = 0;

	while (num / 8 != 0)
	{
		num /= 8;
		c++;
	}
	c++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		arr[x] = temp % 8;
		temp /= 8;
	}
	for (x = c - 1; x >= 0; --)
	{
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (c);
}
