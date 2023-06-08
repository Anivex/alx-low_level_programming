#include "main.h"

/**
 * _is_root - calcule square root of a number.
 *
 * @n: number.
 * @i: square.
 *
 * Return: natural square root, or -1 if doesn't have natural square.
 */

int _is_root(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);

	return (_is_root(n, i + 1));
}

/**
 * _sqrt_recursion - check if is root
 *
 * @n: number.
 *
 * Return: result of function _is_root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_is_root(n, 1));
}
