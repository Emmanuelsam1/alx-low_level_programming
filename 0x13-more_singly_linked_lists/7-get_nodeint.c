#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - the nth node of a linked listint_t list
 * @head: the first node
 * @index: index of the node
 * Return: pointer of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
