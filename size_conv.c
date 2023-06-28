#include "main.h"
/**
 * size_conv - Casts specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int size_conv(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * unsgnd_conv - Cast to specified size
 * @num: input Numbe
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int unsgnd_conv(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
