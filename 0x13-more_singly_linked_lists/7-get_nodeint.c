#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index in a linked list
 * @head: first node in the linked list
 * @index: index to search
 *
 * Return: A pointer to the node searched or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
