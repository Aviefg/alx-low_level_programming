#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: str length to concatenate
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0';)
		a++;

	for (b = 0; s2[b] != '\0';)
		b++;

	ptr = malloc((a + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		ptr[c] = s1[c];

	if (n < b)
	{
		for (d = 0; d < n; d++, c++)
			ptr[c] = s2[d];
		ptr[c] = '\0';
	}
	else
	{
		for (d = 0; s2[d] != '\0'; d++, c++)
			ptr[c] = s2[d];
		ptr[c] = '\0';
	}
	return (ptr);
}
