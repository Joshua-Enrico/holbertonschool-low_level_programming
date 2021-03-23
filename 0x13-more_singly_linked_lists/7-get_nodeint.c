#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to start of a list.
 * @index: index of node.
 * Return:  returns the nth node of a linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	node = head;
	while (x < index)
	{
		node = node->next;
		x++;
	}
	return (node);
}
