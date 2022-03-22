#include "main.h"
/**
 * _puts - output string, then a new line.
 * @str: string to be printed.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');
}
