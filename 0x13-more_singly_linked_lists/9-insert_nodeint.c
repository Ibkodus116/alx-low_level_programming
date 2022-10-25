#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t ptr, tmp;

	listint_t *ibk;

	ibk = malloc(sizeof(listint_t));

	if (ibk == NULL)
		return (NULL);

	ibk->n = n;
	ibk->next = *head;

	*head = ibk;
	return (*head);

}