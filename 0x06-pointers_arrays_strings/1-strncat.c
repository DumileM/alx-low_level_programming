#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: parameter 1
 *
 * @src: parameter 2
 *
 * @n: parameter 3
 *
 * Return: varies
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = destlen, j = 0; j < n && dest[j] != '\0' && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
