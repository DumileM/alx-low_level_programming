#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: input integer.
 *
 * Return: 1 if integer is a prime number and 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
		return (1);
	else
		return (0);
}
