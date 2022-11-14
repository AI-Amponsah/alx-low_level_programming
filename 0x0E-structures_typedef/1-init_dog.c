#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a struct
 * @name: Item name
 * @age: age
 * @owner: owner
 *@d: pointer to struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
