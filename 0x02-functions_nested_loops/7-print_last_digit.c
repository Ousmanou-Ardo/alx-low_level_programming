#include "main.h"
/**
 * print_last_digit - prints last digit of a given.
 * @n: digit to find in the function.
 * Return: last digit.
 */
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
