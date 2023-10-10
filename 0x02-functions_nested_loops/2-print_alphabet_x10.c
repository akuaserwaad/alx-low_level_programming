#include "main.h"

/**
 * print_alphabet_x10- this prints the alphabet 10 times
 * Return void here
 */

void print_alphabet(void)

{
	char x;
	int i = 0;

	while (i <= 9)

{

	for (x = 'a'; x <= 'z'; x++)

{
	_putchar(x);
}
_putchar('\n');
i++;
}
}
