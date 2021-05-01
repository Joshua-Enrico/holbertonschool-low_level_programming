#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to beggining of a list
 * @idx: the index to at which to insert
 * @n: index to node that will be return
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp = *h;
	unsigned int num_nodes = 0, counter = 0;

	if (new == NULL || h == NULL)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		num_nodes++;
	}
	tmp = *h;
	if (idx > num_nodes - 1)
	{
		return (NULL);
	}
	for (counter = 0; counter < idx; counter++)
	{
		tmp = tmp->next;
	}
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
	return (new);
}
