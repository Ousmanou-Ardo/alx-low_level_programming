#include <stdio.h>
#include "main.h"
/**
 * print_number - to display  number
 * @n: variable to be received number
 */

void print_number(int n)
{
	int nani, tmpoi, exposant;

	exposant = 1;
/*Check negatives*/
	if (n >= 0)
		nani = n * -1;
	else
	{
		nani = n;
		_putchar('-');
	}

/*Initialize exposantnent variable*/
	tmpoi = nani;
	while (tmpoi <= -10)
	{
		exposant *= 10;
		tmpoi /= 10;
	}
/*Main */
	while (exposant >= 1)
	{
		_putchar(((nani / exposant) % 10) * -1 + '0');
		exposant /= 10;
	}
}
