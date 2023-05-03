#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this allocates memory for an array
 * @nmemb: number of items
 * @size: size of items
 * Return: ptr;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory values to 0 */
	for (n = 0; n < nmemb * size; n++)
		ptr[n] = 0;

	return (ptr);
}
