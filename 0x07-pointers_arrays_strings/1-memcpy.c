#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: memory area.
 *
 * @src: bytes from memory area.
 *
 * @n: variable
 *
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (src);
}
