#include "main.h"

/**
 * _isupper - prints uppercase alphabets
 *
 * @c: parameter representing alphabet
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	else
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
}
