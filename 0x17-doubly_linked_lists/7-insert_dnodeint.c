#include "lists.h"
/**
*insert_dnodeint_at_index : inserts node any the specified index.
*unsigned int idx : the specified index.
*@n : the value to add to the list
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new ,*tmp;

    new = malloc(sizeof(dlistint_t));
    if(!new)
        return(NULL);
    new->n = n;
    tmp = *h;
    if(!tmp)
    {
        new->prev = NULL;
        new->next = NULL;
        *h = new;
        return(new);
    }
    if(idx == 0)
    {
        new->prev = NULL;
        new->next = tmp;
        tmp->prev = new;
        *h = new;
        return(new);
    }
    for(;idx > 1 && tmp->next;idx--)
        tmp = tmp->next;
    if(!tmp->next)
        return(NULL);
    new->prev = tmp;
    new->next = tmp->next ? tmp->next : NULL;
    if(tmp->next)
        tmp->next->prev = new;
    tmp->next = tmp->next && idx > ? NULL : new;
    return(new);
}