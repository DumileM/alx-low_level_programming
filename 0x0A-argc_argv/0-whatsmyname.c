#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name, followed by a new line.
 *
 * @argc: number of strings/arguments.
 *
 * @argv: holds the strings/argument values.
 *
 * Return: always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
