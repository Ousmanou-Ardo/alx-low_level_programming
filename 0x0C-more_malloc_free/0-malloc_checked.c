#include <stdlib.h>
/**
  * malloc_checked - allocating memory using malloc
  * @b: buffer's size
  * Return: buffer's pointer
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
