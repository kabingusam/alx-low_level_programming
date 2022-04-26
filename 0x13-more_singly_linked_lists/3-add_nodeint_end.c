#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* add_nodeint : adds node at the end of a list.
* @n: int to add to the list.
* return : the  current postion in the list.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new , *present;

    new = malloc(sizeof(listint_t));
    if(new == NULL)
        return(NULL);
    new->n = n;
    new->next = NULL;

    if (*head = NULL)
        *head = new;
    else
    {
        present = *head;
        while(present->next != NULL)
            present = present->next;
        present->next = new;
        return(*head);
    } 
}