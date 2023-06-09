#include "main.h"

/**
 * _strlen - compute length of string
 * @s: string.
 * Return: length of a given string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * _check_palindrome - cut string in half and check if part left is
 * the same right part.
 *
 * @s: string.
 * @len: length of string.
 * @mid: middle index of string
 *
 * Return: 1 if palindrome, otherwise 0.
 */

int _check_palindrome(char *s, int len, int mid)
{
	if (mid == 0)
		return (1);
	if (s[mid - 1] != s[(len - 1) - (mid - 1)])
		return (0);
	return (_check_palindrome(s, len, mid - 1));
}

/**
 * is_palindrome - check if string is a palindrome.
 *
 * @s: input string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (!s || len < 2)
		return (0);

	return (_check_palindrome(s, len, len / 2));
}
