#include "lists.h"
/**
 * h : head of the list
 * Return: the number of elements in a linked
 * dlistint_len : gets length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t i;
    
    for(i = 0; h; i++)
        h = h->next;
    return(i)
}
