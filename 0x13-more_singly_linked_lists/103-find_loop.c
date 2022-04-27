#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jane, *james;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (jane == james)
		{
			jane = head;

			while (jane != hare)
			{
				jane = jane->next;
			    james = james->next;
			}

			return (jane);
		}

		jane = jane->next;
		james = (james->next)->next;
	}

	return (NULL);
}