#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
unsigned long count, i, j, k;

i = 0;
p = 1;
for (count = 0; count < 50; count++)
{
k = i + p;
i = p;
p = k;
printf("%lu", k);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
