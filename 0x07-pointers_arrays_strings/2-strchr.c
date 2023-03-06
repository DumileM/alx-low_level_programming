#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string variable.
 *
 * @c: character variable.
 *
 * Return: varies.
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
		return (0);
}
