#include "main.h"

/**
 * __puts_recursion -> a function to prints string
 *
 * @s: string parameter
 *
 * return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
