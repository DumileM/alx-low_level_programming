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
	int i, j;
	int a, b;

	i = 0;
	j = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		src++;
		j++;
	}
	for (a = 0; a <= i; a++)

	{
		putchar(*dest);
	}
	for (b = 0; b <= j; b++)
	{
		putchar(*src);
	}
	*dest = *dest + *src;

	return (dest);
}
