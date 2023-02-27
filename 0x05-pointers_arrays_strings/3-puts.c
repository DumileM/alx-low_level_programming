#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string
 *
 * Return: always 0
 */

void _puts(char *str);
{
	char str = '0';

	while (*str != '\0')
	{
		str++;
	}
	return (str);
	_putchar('\n');
}
