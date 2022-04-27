#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* free_listint : frees the list.
* 
*/
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while(head)
        tmp = head->next
        free(head);
        head = tmp;
}