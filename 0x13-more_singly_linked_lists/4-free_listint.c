#include "lists.h"

/**
 * free_listint - frees memory allocated to a linked list of integers
 * @head: the head node
 */

void free_listint(listint_t *head)
{
	listint_t *amp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		amp = head;
		head = head->next;
		free(amp);
	}
}
