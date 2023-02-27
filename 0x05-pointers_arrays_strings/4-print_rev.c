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

	i = 0;
	while (*s != '\0')
	{	
		_putchar('s');
		s++;
		i++;
	}
	_putchar('\n');
}
