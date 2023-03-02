#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: varies
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] == s1[i])
		{
			return (0);
		}
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		if (s1[i] > s2[i])
		{
			return (15);
		}
	}
	return (0);
}
