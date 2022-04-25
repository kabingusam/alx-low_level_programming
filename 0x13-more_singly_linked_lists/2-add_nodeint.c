#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* add_nodeint : adds node at the end of a list.
* @n: int to add to the list.
* return : the  current postion in the list.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = *head;
    new = malloc(sizeof(listint_t));
    if(new == NULL)
        return(NULL);
    new->n = n;
    new->next = *head;
    *head = new;
    return(*head);   
}