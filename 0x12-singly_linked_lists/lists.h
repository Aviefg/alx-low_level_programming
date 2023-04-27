#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list - node list struct
 * @strVal: string value
 * @strLen: string Length
 * @next: pointer to the next node
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
