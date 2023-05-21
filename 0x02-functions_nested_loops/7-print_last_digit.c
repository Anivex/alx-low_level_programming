#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: integer.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	n = n % 10;
	n = n < 0 ? -n : n;
	_putchar(n + '0');
	return (n);
}

