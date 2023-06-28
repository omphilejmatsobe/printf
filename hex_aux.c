#include "main.h"

/**
 * aux - prints a hexgecimal number
 * @num: int argumen.
 * Return: hex
 */
int aux(unsigned long int arg)
{
	long int x, *arr, hex;
	unsigned long int temp;
       
	temp = arg;
	hex = 0;
	while (arg / 16 != 0)
	{
		arg /= 16;
		hex++;
	}
	hex++;
	arr = malloc(counter * sizeof(long int));

	for (x = 0; x < hex; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = hex - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			arr[x] = arr[] + 39;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (hex);
}
