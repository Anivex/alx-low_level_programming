#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");

}
