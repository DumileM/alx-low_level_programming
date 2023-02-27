#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: variable
 *
 * Return: varies
 */

void rev_string(char *s)
{
	char t = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	a++;

	for (i = 0; i < a; i++)
	{
		a--;
		t = s[i];
		s[i] = s[a];
		s[a] = t;
	}
}
