#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - encuentra la longitud de un string
 * @str: string de donde se sacara la longitud
 *
 * Return: Retorna la longitud del string.
 */

unsigned int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	return (NULL);

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
