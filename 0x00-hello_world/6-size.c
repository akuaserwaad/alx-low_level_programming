#include <stdio.h>

/**
	* main - this is the main put function
	* Return: 0
 */
int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(1 byte));
	printf("Size of int: %lu bytes\n", sizeof(4 bytes));
	printf("Size of short: %lu bytes\n", sizeof(2 bytes));
	printf("Size of long: %lu bytes\n", sizeof(8 bytes));
	printf("Size of long long: %lu bytes\n", sizeof(8 bytes));
	printf("Size of float: %lu bytes\n", sizeof(4 bytes));
	printf("Size of double: %lu bytes\n", sizeof(8 bytes));
	printf("Size of long double: %lu bytes\n", sizeof(16 bytes));
		return (0);
}

