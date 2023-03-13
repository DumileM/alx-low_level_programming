#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: string 1.
 *
 * @s2: string 2.
 *
 * Return: Failure (NULL).
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *str;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; i < (len1 + len2); j++)
		{
			str[i] = s2[j];
			i++;
		}
	}

	str[i] = '\0';

	return (str);
}

