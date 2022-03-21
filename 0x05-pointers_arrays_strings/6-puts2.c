#include "main.h"
/**
 * puts2 - output every other char of the string.
 * @str: input string that is printed.
 */
void puts2(char *str)
{
int i;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
