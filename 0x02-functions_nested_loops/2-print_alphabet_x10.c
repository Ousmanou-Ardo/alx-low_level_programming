#include "main.h"
/**
 * print_alphabet_x10 - alphabet from a-z 10 times.
 * Return: Nothing to be returned.
 * another line here
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i; 
for (i = 0; i <= 9; i++)
{
while (c <=  'z')
{
_putchar(c);
c++;
}
}
_putchar('\n');
}
