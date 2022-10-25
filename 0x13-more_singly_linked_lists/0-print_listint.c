#include "lists.h"

size_t print_listint(const listint_t *h)
{
/*    listint_t *ibk;
*/
    size_t count = 0;
    if (h)
    {
        while (h != NULL)
        {
            printf("%d\n",h->n);
            h = h->next;
            count++;
        }

    }
    return(count);
}