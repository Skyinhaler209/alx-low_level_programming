#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for adding numbers
 * atoi - is used to cinvert the string to integer
 *@argc: is considered to be the argument count
 *@argv: is considered to be the argument vector array
 *
 * Return: always (0) success, (1) failure
 */

int main(int argc, char *argv[])
{
	int result;
	char *c;

	while (--argc)
	{
		for (c = argv[argv]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);

}
