#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter
 *
 * Return: return i
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
		i = -(i);
	_putchar(i + '0');
	return (i);
}
