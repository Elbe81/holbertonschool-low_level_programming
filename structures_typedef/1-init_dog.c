#include "dog.h"

/**
 * init_dog - Function to intialize variables.
 * @d: Pointer as a parameter.
 * @name: Pointer as a parameter.
 * @age: Variable for this function.
 * @owner: Pointer as a parameter.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

