#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: parameter
 *
 * @a: parameter
 *
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else

		int a = 1;

		for (a = 1; a <= n; a++)
			_putchar('_');
		_putchar('\n');
}
