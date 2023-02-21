#include "main.h"

/**
 * print_sign - function prints sign of #
 *
 * @n: parameter
 *
 * Return: 1 if # > 0, 0 if # = 0, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}

