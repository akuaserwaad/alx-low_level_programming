#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concactenate two strings
 * @s1 - The first string to concactenate
 * @s2 - The second string to concactenate
 * @n - The maximum number of bytes from s2 to concactenate
 * Return: a pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int s1;
	unsigned int s2;

	if (s1 == NULL)
{
	s1 = " ";
}
	if (s2 == NULL)
{
	s2 = " ";
}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	unsigned int full_length = strlen(s1) + n;
	char *concat_string = malloc(full_length + 1);

	if (concat_string == NULL)
	{
		return (NULL);
	}
	strcpy(concat_string, s1);
	strncat(concat_string, s2, n);

	return (concat_string);
	}
