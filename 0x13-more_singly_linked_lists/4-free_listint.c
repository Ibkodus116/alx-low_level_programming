#include "lists.h"
/**
 * free_listint - frees a list_t list.
 *
 * @head: the head node
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;


	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
