#include "lists.h"
/**
 * get_dnodeint_at_index - returns a number from a linkedl list
 * @head: pointer to beggining of a list
 * @index: index to node that will be return
 * Return: nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int nodes = 0, counter = 0;

	if (head == NULL)
		return (NULL);
	copy = head;
	while (copy != NULL)
	{
		copy = copy->next;
		counter++;
	}
	copy = head;
	while (nodes < index)
	{
		copy = copy->next;
		nodes++;
	}
	return (copy);
}
