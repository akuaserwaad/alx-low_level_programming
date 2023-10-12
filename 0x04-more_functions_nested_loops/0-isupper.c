#include "main.h"
/**
 * _isupper - checking for lowercase character
 * @c: the character to be checked
 * Return: 1 if c is ippercase, Return:0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
	return (1);
}
return (0);
}
