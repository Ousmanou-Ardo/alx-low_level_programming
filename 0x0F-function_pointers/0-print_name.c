#include "function_pointers.h"
/**
  * print_name - printing the name
  * @name: inputing string
  * @f: function pointer casted to char pointer
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
