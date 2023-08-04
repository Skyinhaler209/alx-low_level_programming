#include <stdio.h>

/**
 * main - entry point
 * @argc: is considered to be the argument count
 * @argv: is considered to be the argument vector
 *
 * Return: alwasy (0) success
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
