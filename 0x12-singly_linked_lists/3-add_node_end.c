#include "lists.h"

/**
 * add_node_end - A function that adds new node at beginning of a linked list
 * @head: A double pointer to list_t list
 * @str: A string for new node
 * Return: An address of new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *add;
	int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = add;
	return (add);
}
