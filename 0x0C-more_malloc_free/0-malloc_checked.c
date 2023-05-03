#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - this allocates memory using malloc
 * @b: memory size
 * Return: address of memory, ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
