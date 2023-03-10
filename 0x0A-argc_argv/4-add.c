#include "main.h"
#include <stdio.h>

/**
 * main - function that adds positive numbers.
 *
 * @argc: number of arguments.
 *
 * @argv: array of arguments.
 *
 * Return: if successful, 1.
 */

int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = 0;
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
