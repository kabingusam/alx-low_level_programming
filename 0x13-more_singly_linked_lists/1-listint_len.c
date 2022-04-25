#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* listint_len : finds the number of nodes in a list.
* @h: singly list to print.
* return : the number of nodes of the list.
*/
size_t listint_len(const listint_t *h)
{
    size_t i; //initialize the count variable

    for(i = 0; h; i++)
        h = h->next;
    return(i);
}