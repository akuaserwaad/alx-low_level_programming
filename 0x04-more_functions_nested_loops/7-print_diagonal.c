#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 * Return: Always 0
 */

void print_diagonal(int n)
{
	char a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)

	{
		for (b = 0; b < a; b++)
		{
		_putchar(' ');
	}
		_putchar('\\');
	_putchar('\n');
	}
}
