#include "main.h"
/**
 * print_numbers - output digits from 1-9
 * here the is no return.
 */
void print_numbers(void)
{
int p = 0;

while (p <= 9)
{
_putchar(p + '0');
++p;
}
_putchar('\n');
}
