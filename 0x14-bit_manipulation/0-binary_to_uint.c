#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: string contains 0 and 1.
 *
 * Return: the converted number, or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int u;
	int len, i;

	if (!b)
		return (0);

	len = strlen(b);
	for (i = 0, u = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		u += ((int)(b[i]) - 48) * (len - i - 1);
	}

	return (u);
}
