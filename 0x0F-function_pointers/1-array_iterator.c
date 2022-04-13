#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - executing a function on element's array
  * @array: inputing array
  * @size: size of the array
  * @action: pointer to the function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
