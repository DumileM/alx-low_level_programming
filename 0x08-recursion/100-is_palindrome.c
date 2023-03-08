#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not.
 *
 * @s: string.
 *
 * Return: 1 if string is a palindrome and 0 otherwise.
 */

int is_palindrome(char *s)
{
	char temp;

	temp = *s;

	if (*s)
	{
		is_palindrome(s + 1);
	}
	if (*s == temp)
		return (1);
	else
		return (0);
}
