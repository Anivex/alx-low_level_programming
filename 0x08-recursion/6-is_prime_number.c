#include "main.h"

/** 
 * _is_prime - function that check if input integer is prime or not.
 *
 * @n: input integer.
 * @c: count.
 *
 * Return: 1 or 0 if it not prime.
 */

int _is_prime(int n, int c)
{
	if (c == 1)
		return (1);

	if (n % c == 0)
		return (0);

	return (_is_prime(n, c - 1));
}

/**
 * is_prime_number - check if number is prime.
 *
 * @n: input number.
 *
 * Return: 1 if number is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n < 2 || (n > 2 && n % 2 == 0))
		return (0);

	return (_is_prime(n, n - 1));
}

