#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initiates it with a specific char.
 * @size: size of array
 * @c: character to initialise
 * Return: null if size is zero
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}
