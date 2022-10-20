#include "lists.h"

/**
 * add_node - dds a new node at the beginning of a list_t list.
 *
 * @head: head of the node
 * @str: strings passed
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ibk;
	int count;

	ibk = malloc(sizeof(list_t));
	if (ibk == NULL)
		return (NULL);

	ibk->str = strdup(str);
	for (count = 0; str[count]; count++)
		;

	ibk->len = count;
	ibk->next = *head;
	*head = ibk;

	return (*head);
}
