#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: a pointer to string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int len, i, k, c;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	/* calcule length of each argument in array*/
	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			len++;
			k++;
		}
	}

	s = malloc(sizeof(char) * (len + ac + 1));
	if (s == NULL)
		return (NULL);

	c = 0;
	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			s[c] = av[i][k];
			c++;
			k++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
