#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of the node
 * @str: the strings in the nodde
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ibk, *temp;
	size_t i;

	ibk = malloc(sizeof(list_t));
	if (ibk == NULL)
		return (NULL);

	ibk->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	ibk->len = i;
	ibk->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = ibk;
	} else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ibk;
	}
	return (*head);
}
