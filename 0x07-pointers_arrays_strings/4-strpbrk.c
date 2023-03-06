#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string variable.
 *
 * @accept: string variable.
 *
 * Return: varies.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int k = 0;
	int n = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 1;
				n = i;
				break;
			}
		}
		if (k == 1)
			break;
		i++;
	}
	if (n == 0)
		return ('\0');
	else
		return (s + n);
}
