#include "main.h"

/**
 * *_strcat - this function concatenates two strings.
 *
 * @dest: variable 1
 *
 * @src: variable 2
 *
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		k++;
	}
	for (i = 0; i <= k; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
