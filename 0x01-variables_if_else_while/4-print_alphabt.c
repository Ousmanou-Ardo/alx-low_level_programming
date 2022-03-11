#include <stdio.h>
/**
 * main - Print out the alphabet except the letters q and e.
(*
 * Return: 0 when success occurs
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
