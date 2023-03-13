#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: size of array/string.
 *
 * @c: character variable.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	/* initialize char p and allocate memory. */
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		/* runs through the string char by char */
		*(p + i) = c;
	}

	/* For now, our string is empty */
	*(p + i) = '\0';

	return (p);
}
