#include "lists.h"

size_t print_list(const list_t *h)
{
/*    unsigned int i, count;*/

    int count = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[%d] %s\n", 0, "(nil)");
        }else{
            printf("[%u] %s\n", h->len, h->str);
        }
        h = h->next;
        count ++;
    }

/*    printf("[%u] %s %d\n", h->len, h->next->str, count);
*/
    return(count);
}