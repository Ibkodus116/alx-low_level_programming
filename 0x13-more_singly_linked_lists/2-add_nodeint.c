#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: beginning of the node
 * @n: data of node
 *
 * Return: address of new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ibk;

	ibk = malloc(sizeof(listint_t));

	if (ibk == NULL)
		return (NULL);

	ibk->n = n;
	ibk->next = *head;

	*head = ibk;
	return (*head);
}
