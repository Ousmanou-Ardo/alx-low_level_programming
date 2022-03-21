#include "main.h"
/**
 * _puts - output string, then a new line.
 * @str: string to be printed.
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
*s++;
}
_putchar('\n');
}
