#include "main.h"
/**
 * puts2 - output every other char of the string.
 * @str: input string that is printed.
 */
void puts2(char *str)
{
int ls, i;
i = 0;
while (str[i] != '\0')
{
i++;
}
for (ls = 0; ls < i; ls += 2)
{
_putchar(str[ls]);
}
_putchar('\n');
}
