#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - output a list of strings
  * @separator: character delimitor
  * @n: nmber of items to output
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(ap, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
