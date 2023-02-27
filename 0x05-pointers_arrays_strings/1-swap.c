#include "main.h"

/**
 * swap_int - swaps two values
 *
 * @a: variable
 *
 * @b: variable
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	auto int c = *a;
	*a = *b;
	*b = c;
}
