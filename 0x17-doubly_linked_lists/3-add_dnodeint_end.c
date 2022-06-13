#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of list
 * head - head of the linked list
 * @n : value to dd to the list
 */
 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
 {
    dlistint_t *newNode,*lastNode;
    
    newNode = malloc(sizeof(dlistint_t));
    if(!newNode)
        return(NULL);
    newNode->n = n;
    newNode->next = NULL;
    if(!*head)
    {
        newNode->prev == NULL;
        *head = newNode;
        return(head);
    }
    lastNode = *head;
    while(lastNode->next)
    {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
    lastNode->prev = *head;
    return(lastNode);
 }
