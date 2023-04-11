#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates n arrays of chars
 * @c: char type
 * @size: size of array
 * Return: The base address of the pointer (a)
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int n;

	if (size == 0)
		return (NULL);

	i = malloc(sizeof(char) * size);

	if (i == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		i[n] = c;

	return (i);
}
