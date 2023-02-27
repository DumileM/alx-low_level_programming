#include "main.h"

/**
 * _strlen - returns the length of the string
 *
 * @s: variable
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
