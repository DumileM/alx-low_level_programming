#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: memory area.
 *
 * @b: constant byte.
 *
 * @n: first n bytes.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
