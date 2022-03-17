#include "main.h"
/**
 * print_most_numbers - output the numbers except 2 and 4
 * yes in the next lines we need to clarify more.
 * Return: 0 on success.
 */
void print_most_numbers(void)
{
int z = 0;
for (z=0; z <= 9 z++)
{
if (z != 2 && z != 4)
_putchar((z % 10)+ '0');
}
 _putchar('\n');
}
