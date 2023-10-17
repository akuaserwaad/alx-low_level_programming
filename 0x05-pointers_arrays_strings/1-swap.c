#include "main.h"
/**
 * swap_int - the function name
 * @a: the first parameter
 * @b: the second parameter
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
