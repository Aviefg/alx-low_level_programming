#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memset - takes in a character
 *
 * return - memset(s, b, n)
*/

char *_memset(char *s, char b, unsigned int n)
{
    return (memset(s, b, n));
}
