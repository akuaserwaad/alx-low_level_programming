#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a particular index
 * @head: pointer to the head node
 * @idx: index to insert at
 * @val: integer value to store
 *
 * Return: head node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int val)
{
	unsigned int i = 0;
	listint_t *new_node, *pur;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = val;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	pur = *head;
	while (pur != NULL)
	{
		if (i == (idx - 1))
		{
			new_node->next = pur->next;
			pur->next = new_node;
			return (new_node);
		}
		i++;
		pur = pur->next;
	}

	free(new_node);
	new_node = NULL;

	return (NULL);
}
