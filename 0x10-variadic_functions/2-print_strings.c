#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
