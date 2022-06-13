#include "lists.h"
/**
 * sum_dlistint: returns sum of all the data (n) in a linked list.
 * head: head of the list
 */
int sum_dlistint(dlistint_t *head)
{
    int sum;
    
    while(head)
    {
        sum += head->n;
        head = head->next;
    }
    return(sum);
}
