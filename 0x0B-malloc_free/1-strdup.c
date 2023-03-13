#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 *
 * @str: string to be duplicated.
 *
 * Return: returns NULL if str = NULL.
 */

char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
