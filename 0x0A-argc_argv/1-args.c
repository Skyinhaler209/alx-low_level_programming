#include <stdio.h>

/**
 * main - entry point for the program
 * @argc: is considered to be the argument count
 * @argv: is considered to be the argument array
 *
 * Return: always (0) success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
