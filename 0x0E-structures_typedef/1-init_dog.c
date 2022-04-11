#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize dogs' structure.
  * @d: struct's name
  * @name: dog's name in struct
  * @age: dog's age in struct
  * @owner: dog's owner's name in struct
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
