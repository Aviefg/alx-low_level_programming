#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer to the first element in the linked list
 *
 * Return: count 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}	
