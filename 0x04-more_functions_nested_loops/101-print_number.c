#include "main.h"
/**
 * print_number - prints an  integer
 * @n: the variable  number
 */

void print_number(int n)
{
long len, papi, i, tamporizer, exposant;

papi = n;
exposant = len =  1;
/*see if the number is negatives*/
if (papi < 0)
{
papi *= -1;
_putchar('-');
}

/* yes here we are*/
tamporizer = papi;
while (tamporizer >= 10)
{
len++;
tamporizer /= 10;
}

/*exposant*/
	for (i = 1; i < len; i++)
		exposant *= 10;
/*main */
while (exposant > 1)
{
_putchar((papi / exposant) % 10 + '0');
exposant /= 10;
}
_putchar(papi % 10 + '0');
}
