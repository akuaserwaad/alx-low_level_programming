#include "lists.h"

/**
 * free_listint2 - frees memory allocated to a linked list of integers
 * while avoiding dangling pointers
 * @head: pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *amp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		amp = *head;
		*head = (*head)->next;
		safe_free(amp);
	}
}

/**
 * _free - a safer way to free dynamically allocated memory
 * @ptr: pointer to memory location
 *
 */

void _free(void **ptr)
{
	if (ptr != NULL || *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
