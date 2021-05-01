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
	if (index == 0)
	{
		return (head);
	}
	if (index > counter - 1)
	{
		printf("!Node does not exit!\n");
		exit(1);
	}
	while (nodes < index)
	{
		copy = copy->next;
		nodes++;
	}
	return (copy);
}
