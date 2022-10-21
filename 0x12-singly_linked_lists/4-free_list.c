#include "lists.h"

void free_list(list_t *head)
{
	list_t *ibk;

	while ((ibk = head) != NULL)
	{
		head = head->next;
		free(ibk->str);
		free(ibk);
	}
}