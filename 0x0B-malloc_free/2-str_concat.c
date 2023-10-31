#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int fer1 = 0, fer2 = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + x))
		fer1++, x++;
	while (*(s2 + y))
		fer2++, y++;
	fer2++; /* add null terminator to length */

	concat = malloc(sizeof(char) * (fer1 + fer2)); /*alloc memory*/

	if (concat == NULL) /* validate memory */
		return (NULL);

	x = 0, y = 0;
	while (x < fer1) /* concatenate */
	{
		*(concat + x) = *(s1 + x);
		x++;
	}
	while (y < fer2)
	{
		*(concat + x) = *(s2 + y);
		x++, y++;
	}

	return (concat);
}
