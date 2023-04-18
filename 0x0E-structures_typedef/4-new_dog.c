#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This creates a dog struct
 *
 * @str: to get the string
 *
 * Return: NULL if function fails
 */

/**
 * myStrlen - Computes the length of a string.
 *
 * @str: The string whose length is to be computed.
 *
 * Return: The length of the string.
 */

/**
 * myStrcpy - Copies a string from source to destination.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */

int myStrlen(const char *str)
{
size_t len = 0;

	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}

char *myStrcpy(char *dest, const char *src)
{
char *save = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return (save);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (myStrlen(name) + 1));
	dog->owner = malloc(sizeof(char) * (myStrlen(owner) + 1));

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}

	dog->name = myStrcpy(dog->name, name);
	dog->owner = myStrcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
