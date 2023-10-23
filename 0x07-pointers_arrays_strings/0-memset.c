#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value used to fill the memory
  *
  * @s: Function paramater
  *
  * @n: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	s[x] = b;
	return (s);
}
