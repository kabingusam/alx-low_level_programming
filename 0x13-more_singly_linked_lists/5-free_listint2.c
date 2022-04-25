#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* free_listint : frees the list.
*/
void free_listint2(listint_t **head)
{
    listint_t *new,*present;
    present = *head;
    if(head = NULL)
        return;
    while(present)
    {
        new = present->next;
        free(present);
        new = present;
    }
    *head = NULL;
}