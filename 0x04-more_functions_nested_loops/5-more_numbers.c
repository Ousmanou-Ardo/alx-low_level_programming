#include "main.h"
/**
 * more_numbers - output ranging from 0-14 10 times.
 * Return: return nothing.
 */
void more_numbers(void)
{
int k, j;

k = j = 0;
while (k < 10)
{
while (k <= 14)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
++j;
}
_putchar('\n');
j = 0;
i++;
}
}
