#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int x = 0;
	int y = 0;

		if (str == NULL)
		{
			return (NULL);
		}
	while (*(str + x))
	{
		y++, x++;
	}
	x++;

	duplicate = malloc(sizeof(char) * y);

	if (duplicate == NULL)
	{
		return (NULL);
	}
x = 0;
while (x < y)
{
	*(duplicate + x) = *(str + x);
		x++;
	}

	return (duplicate);
}
