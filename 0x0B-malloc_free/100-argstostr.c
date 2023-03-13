#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function that concatenates all the
 * arguments of your program.
 *
 * @ac: integer/count variable.
 *
 * @av: pointer to array of size ac.
 *
 * Return: NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int size = 0;
	char *arg;

	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
	}

	arg = malloc((sizeof(sizeof(char) * size) + 1));
	if (arg == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}

