#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: the head node
 *
 * Return: the head node’s data (n);
*/
int pop_listint(listint_t **head)
{
	listint_t *h, *ptr;
	int i;


	if (*head == NULL)
		return (0);

	h = *head;
	i = h->n;
	ptr = h->next;
	free(h);

	*head = ptr;

	return (i);
}
