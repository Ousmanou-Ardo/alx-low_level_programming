#include "main.h"
/**
 * print_square - drawing a square using multiple terminal lines and hashes.
 * @n: number of hash to print in each line.
 */
void print_square(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
