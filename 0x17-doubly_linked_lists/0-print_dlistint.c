#include "list.h"
/**
 * print_dlistint: print the doubly linked list
 * n : next integer
 * return : number of items 
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t i;
    for(i = 0; h; i++)
    {
        printf("%d\n",h->n);
        h = h->next;
    }
    return(i);
}
