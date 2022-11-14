#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a struct
 * @name: Item name
 * @age: age
 * @owner: owner
 * @d: pointer to struct
 *Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
