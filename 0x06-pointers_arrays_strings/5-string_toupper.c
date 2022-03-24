#include "main.h"
/**
 * string_toupper - converting lowercase  of a string to uppercase.
 * @c: pointing to the string 
 * Return: the converted string.
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
