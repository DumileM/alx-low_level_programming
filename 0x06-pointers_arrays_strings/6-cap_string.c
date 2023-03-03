#include "main.h"

/**
 * cap_string - changes lowercase letters of a string to uppercase.
 *
 * @str: string
 *
 * Return: always 0
 */

char *cap_string(char *str)
{
        int i = 0;

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] -  32;
	}
	for (i = 1; str[i] != '\0'; i++)
                if (str[i] >= 97 && str[i] <= 122)
                        str[i] = str[i] - 32;
        return (0);
}
