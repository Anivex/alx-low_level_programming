#include "main.h"

/**
 * main - print _putchar followed by new line.
 *
 * Return: 0.
 */

int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');

	return (0);
}
