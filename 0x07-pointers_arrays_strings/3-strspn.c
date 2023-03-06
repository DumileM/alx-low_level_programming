#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: initial segment variable.
 *
 * @accept: variable.
 *
 * Return: varies.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (n);
		}
	}
	return (n);
}
