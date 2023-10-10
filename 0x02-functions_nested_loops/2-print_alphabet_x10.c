#include "main.h"
/**
 * print_alphabet_x10-print the alphabet 10 times
 * Return: void here
 */

void print_alphabet_x10(void)
{
	char x;
	int i = 1;

	while (i <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
