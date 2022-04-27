#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* More singly linked list.
* pop_listint : deletes the head node of a listint_t linked list
* @rem: what is to be returned.
*/
int pop_listint(listint_t **head)
{
    listint_t *tmp;
	int rem;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rem);
}
