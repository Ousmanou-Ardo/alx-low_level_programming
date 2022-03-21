#include "main.h"
/**
 * _puts - output string, then a new line.
 * @str: string to be printed.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
