#include <stdio.h>
#include "main.h"
/**
 * print_array - Output an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
_putchar('\n');
}
