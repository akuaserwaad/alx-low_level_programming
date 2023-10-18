#include "main.h"

/**
  * _strncpy - The main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
	dest[x] = src[x];
	x++;
	}
	while  (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
	}
