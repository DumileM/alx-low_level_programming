#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: minimum value in the array.
 * @max: maximum value in the array.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
