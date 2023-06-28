#include "main.h"
/**
 * hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int hex(va_list arg)
{
	int x, *ar, y;
	unsigned int num, temp;

	y = 0;
	num = va_arg(arg, unsigned int);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		y++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}

	free(ar);
	return (y);
}
