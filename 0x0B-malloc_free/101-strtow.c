#include "main.h"

/**
 * count_winstr - count many words in string.
 *
 * @str: string.
 *
 * Return: an integer value.
 */

int count_winstr(char *str)
{
	int wc, i, is_space;

	for (i = 0, wc = 0, is_space = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_space = 0;
		else
		{
			if (is_space == 1)
				continue;
			else
			{
				is_space = 1;
				wc++;
			}
		}
	}
	if (is_space == 1)
		wc++;
	return (wc);
}

/**
 * allocate_wstr - count each word in string and allocate in memory.
 *
 * @s: where we allocate a new memory.
 * @str: string contains words.
 *
 * Return: 1 if it fails. 0 for success.
 */

int allocate_wstr(char **s, char *str)
{
	int wc, i, is_space, wl;

	for (i = 0, is_space = 0, wl = 0, wc = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && is_space == 1)
		{
			s[wc] = malloc(sizeof(char) * (wl + 1));
			if (s[wc] == NULL)
			{
				while (wc < 0)
				{
					free(s[wc]);
					wc--;
				}
				free(s);
				return (1);
			}
			wc++;
			is_space = 0;
			continue;
		}

		if (str[i] == ' ')
			continue;
		else
		{

			wl++;
			is_space = 1;
		}
	}
	if (str[i - 1] != ' ')
		s[wc] = malloc(sizeof(char) * (wl + 1));
	return (0);
}

/**
 * strtow - function that splits in to word.
 *
 * @str: string.
 *
 * Return: a pointer to an array of string.
 */

char **strtow(char *str)
{
	char **s;
	int wc, i, is_space, wl;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_winstr(str);
	if (wc == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (wc + 1));
	if (s == NULL)
		return (NULL);

	s[wc] = NULL;
	i = allocate_wstr(s, str);
	if (i == 1)
		return (NULL);
	/* copy words from string to a newly allocated space*/
	for (i = 0, wc = 0, wl = 0, is_space = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && is_space == 1)
		{
			s[wc][wl] = '\0';
			wc++;
			wl = 0;
			is_space = 0;
			continue;
		}
		if (str[i] == ' ')
			is_space = 0;
		else
		{
			s[wc][wl] = str[i];
			wl++;
			is_space = 1;
		}
	}
	if (str[i - 1] != ' ')
		s[wc][wl] = '\0';
	return (s);
}
