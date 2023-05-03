#include "lists.h"

/**
 * sum_listint - This calculates the sum of all the data in a linked list
 * @head: the first node
 *
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
