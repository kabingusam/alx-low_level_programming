#include "lists.h"
/**
 * fget_dnodeint_at_index - feturns the nth node of a dlistint_t linked list.
 * head - head of the linked list
 * unsigned int index : the index of the node, starting from 0
 */
 dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
 {
     for(;index != 0;index--)
     {
        if(head == NULL)
            return(NULL);
        head = head->next;
     }
     return(head);
 }
