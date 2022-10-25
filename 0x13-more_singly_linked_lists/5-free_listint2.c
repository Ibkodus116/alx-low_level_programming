#include "lists.h"
/**
 * free_listint2 - frees a list_t list.
 *
 * @head: the head node
*/
void free_listint2(listint_t **head)
{
	listint_t *ibk, *ptr;

	ptr = *head;
	while ((ibk = ptr) != NULL)
	{
		ptr = ptr->next;
		free(ibk);
	}
	ptr = NULL;

}
