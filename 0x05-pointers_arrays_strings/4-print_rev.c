#include "main.h"
/**
 * print_rev - output string, then a new line.
 * @s: the input variable.
 */
void print_rev(char *s)
{
int q;

while (s[q] != '\0')
{
q++;
}
q--;
while (s[q] != '\0')
{
_putchar(s[q--]);
}
_putchar('\n');
}
