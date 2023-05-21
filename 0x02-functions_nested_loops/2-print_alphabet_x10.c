#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++, c = 'a')
	{
		while (c <= 'z')
			_putchar(c++);
		_putchar(10);
	}
}
