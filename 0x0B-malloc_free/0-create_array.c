#include "main.h"
#include <stdlib.h>

/**
 *create_array - used for declaring an array of size size 
 *@size:takes array size
 *@c: chaharcter to be assigned
 *
 *DESCRIPTION: creating an array of determined size and inti *alize, assign char to it 
 *
 * Return: pointer to array, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
