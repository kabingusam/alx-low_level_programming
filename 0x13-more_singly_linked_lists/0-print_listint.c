#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* prinn_listint : prints all elements of listint list.
* @h: singly list to print.
* return : the number of nodes of the list.
*/
size_t print_listint(const listint_t *h)
{
    size_t i;

    for(i = 0; h ; i++)
    {
        printf("%d\n",h->n);// prints the data of current node
        h = h->next; // advances the position of current node
    }
    return(i);
}