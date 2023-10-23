#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
	if (s[x] == c)
	return (s + x);
	}
	return (0);
}
