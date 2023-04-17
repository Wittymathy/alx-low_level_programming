#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes the variable struct dog
 * @d: Pointer to struct dog
 * @name: Name
 * @age: age
 * @owner: Owner
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
