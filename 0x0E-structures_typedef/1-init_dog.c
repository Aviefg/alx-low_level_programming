#include "dog.h"

/**
 * init_dog - This initializes the dog struct
 * @d: A pointer to the struct
 * @name: A pointer to name of the dog
 * @age: The age of the dog
 * @owner: A pointer to the dog owner
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
