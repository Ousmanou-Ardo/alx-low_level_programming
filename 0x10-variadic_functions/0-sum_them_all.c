#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - summing the arguments
  * @n: arguments number
  * @...: list of arguments variable
  * Return: sum of the arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
