#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - this creates a new dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	x++;
	dog->name = malloc(x * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < x; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (y = 0; owner[y]; y++)
		;
	y++;
	dog->owner = malloc(y * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < y; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
