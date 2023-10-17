#include "main.h"

/**
 * _strlen - the function name
 * @s: parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)

	count++;

	return (count);
}
