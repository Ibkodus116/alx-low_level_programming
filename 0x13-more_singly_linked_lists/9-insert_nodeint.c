#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *start, *ibk;
    unsigned int i;

    start = *head;

    if (idx != 0)
    {
        for (i = 0; i < idx - 1 && start != NULL; i++)
        {
            start = start->next;
        }
    }
    if (start == NULL && idx != 0)
        return (NULL);

    ibk = malloc(sizeof(listint_t));
    if (ibk == NULL)
        return (NULL);

    ibk->n = n;

    if (idx == 0)
    {
        ibk->next = *head;
        *head = ibk;
    } else
    {
        ibk->next = start->next;
        start->next = ibk;
    }
    return (ibk);
}