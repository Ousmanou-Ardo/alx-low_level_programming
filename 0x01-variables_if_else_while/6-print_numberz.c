#include <stdio.h>
/**
 * main - pPuts on the screen numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 when  success occurs
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

