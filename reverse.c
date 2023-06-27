#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 * @args: input struct va_arg
 * @s: input pointer to string
 */

char reverse(va_list args)
{
	char *toRev = va_arg(args, char);
	int x, y;
       
	y = 0;

	if (toRev == NULL)
		toRev = "(null)";
	if (s[y] != '\0')
		x++;
	for (x = (y - 1); x >= 0; i--)
		_putchar(toRev[y]);

	return (y);
}