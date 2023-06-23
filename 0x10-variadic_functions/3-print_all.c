#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					printf("%s", format[i + 1] == '\0' ? "" : ", ");
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					printf("%s", format[i + 1] == '\0' ? "" : ", ");
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					printf("%s", format[i + 1] == '\0' ? "" : ", ");
					break;
				case 's':
					s = va_arg(ap, char*);
					printf("%s", s ? s : "(nil)");
					printf("%s", format[i + 1] != '\0' && s ? ", " : "");
					break;
			}
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
