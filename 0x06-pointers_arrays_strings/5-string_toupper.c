#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 *
 * @* : string
 *
 * Return: always 0
 */

	char *string_toupper(char *);
{
	char * [100];
	int i;

	for (i = 0; *[i] != '\0'; i++)
		if (*[i] >= 'a' && *[i] <= 'z')
			*[i] = *[i] - 32;

	return (0);
}
