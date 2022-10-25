#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: beginning of the node
 * @n: data of node
 *
 * Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start, *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	start = *head;
	if (start == NULL)
	{
		*head = tmp;
	} else
	{
		while (start->next != NULL)
		{
			start = start->next;
		}
		start->next = tmp;
	}
	return (*head);

}
