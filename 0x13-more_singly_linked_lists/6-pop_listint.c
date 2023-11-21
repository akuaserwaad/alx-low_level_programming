#include "lists.h"

/**
 * pop_listint - pops the the head node and returns it's data
 * @head: pointer to the head node
 *
 * Return: data stored in the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *amp;
	int data;

	if (*head == NULL)
		return (0);

	amp = *head;
	*head = (*head)->next;

	data = amp->n;

	free(amp);
	amp = NULL;

	return (data);
}
