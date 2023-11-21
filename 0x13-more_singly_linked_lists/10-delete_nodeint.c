#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pur, *prev;

	if (*head == NULL)
		return (-1);

	pur = *head;
	while (pur != NULL)
	{
		if (i == index)
		{
			if (pur == *head)
				*head = (*head)->next;
			else
				prev->next = pur->next;
			free(pur);
			pur = NULL;
			return (1);
		}
		prev = pur;
		pur = pur->next;
		i++;
	}

	return (-1);
}
