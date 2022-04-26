#include "lists.h"
#include <stdio.h>

/**
* More singly linked list.
* prinn_listint : prints all elements of listint list.
* @h: singly list to print.
* return : the number of nodes of the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}