#include <stdio.h>
#include <stdlib.h>

/**
 * main - main portal
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 Allways.
 */

int main(int argc, char *argv[])
{
	int add, i;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}

	printf("%i\n", add);
	return (0);
}
