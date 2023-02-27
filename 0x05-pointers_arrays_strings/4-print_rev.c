#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: variable
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
