#include "main.h"

/**
  * _strlen_recursion - main function
  *
  * @s: Function parameter
  *
  * Return: Length
  */
int _strlen_recursion(char *s)
{
	int lgt = 0;

	if (*s)
	{
	lgt++;
	lgt += _strlen_recursion(s + 1);
	}
	return (lgt);
}
