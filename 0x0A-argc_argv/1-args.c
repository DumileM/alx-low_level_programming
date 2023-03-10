#include "main.h"
#include <stdio.h>

/**
 * main - function prints the number of arguments passed into it.
 *
 * @argv: number of arguments.
 *
 * @argc: array of arguments.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
