#include "main.h"
/**
 *_strcat - the function that concactenates two strings
 *@src: the source string pointer
 *@dest: the destination string pointer
 *Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, x;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (x = 0; src[x] != '\0'; x++, length_of_string++)
	{
		dest[length_of_string] = src[x];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
