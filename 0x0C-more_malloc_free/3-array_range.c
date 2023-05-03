#include "main.h"
#include <stdlib.h>

/**
 * array_range - this creates array of integers
 * @min: the minimum integer value
 * @max: the maximum integer value
 * Return: a pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n, len;

	if (min > max)
		return (NULL);

	/* Gets number of values b/w min and max */
	len = (max - min) + 1;

	ptr = malloc(len * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; min <= max; n++, min++)
		ptr[n] = min;

	return (ptr);
}
