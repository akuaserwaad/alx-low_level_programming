#include "main.h"
/**
 * _isdigit - checks for a digit 0 througgh 9
 * @c: is the digit to be checked
 * Return: 1 if c is a digit or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
	return (1);
}
return (0);
}
