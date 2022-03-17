#include "main.h"
/**
 * print_line - drawing a  line with characters long.
 * @n: output the number of underscores to print.
 */
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
