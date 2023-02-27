#include "main.h"

/**
 * puts2 - prints every other characterof a string
 *
 * @str: variable
 *
 * Return: always return 0
 */

void puts2(char *str)
{
	int i = 0;
	char *a = str;
	int j = 0;
	int k;

	while (*a != '\0')
	{
		i++;
		a++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
