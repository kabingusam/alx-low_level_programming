#include "lists.h"
/**
 * head: head of the linked list
 * n : value to add to the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;
    
    newNode = *head;
    newNode = malloc(sizeof(dlistint_t));
    if(newNode == null)
        return (Null);
    newNode->n = n;
    newNode->prev = Null;
    newNode->next = *head;
    *head = newNode;
    return(newNode);
}
