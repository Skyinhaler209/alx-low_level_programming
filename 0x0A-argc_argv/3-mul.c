#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * atoi - converting the string to integer
 *@argc: is considered to be the argument count
 *@argv: is considered to be the argument vector
 *
 * Return: Always (0) success, (1) error
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc >= 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
