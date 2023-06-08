#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_puts_recursion(++s);
	_putchar(*(--s));
}
