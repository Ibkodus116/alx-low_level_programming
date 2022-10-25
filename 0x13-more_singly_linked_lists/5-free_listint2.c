#include "lists.h"
/**
 * free_listint2 - frees a list_t list.
 *
 * @head: the head node
*/
void free_listint2(listint_t **head)
{
	listint_t *ibk, *ptr;

	if (head == NULL)
	{
		ptr = *head;
		while ((ibk = ptr) != NULL)
		{
			ptr = ptr->next;
			free(ibk);
		}
		*head = NULL;
	}

}
