#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * head - head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;
    
    while(current)
    {
        current = head;
        head->next = head;
        current->prev = NULL;
        current->next = NULL;
        free(current);
    }
}
