#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A struct to define a dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
