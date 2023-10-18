#include "main.h"
/**
* _strncat - the function the concatenates two strings
* @n: number of bytes to be concatenated
* @src: the source string pointer
* @dest: the destination string pointer
* Return: the pointer to destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, x;
	/*x is a counter for n bytes of src to be concatenated */
	/*length_of_string = length of destination string */

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
{
	length_of_string++;
}
for (x = 0; x < n && src[x] != '\0'; x++, length_of_string++)
{
	dest[length_of_string] = src[x];
}
dest[length_of_string] = '\0';
return (dest);
}
