#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - encuentra la longitud de un string
 * @str: string de donde se sacara la longitud
 *
 * Return: Retorna la longitud del string.
 */

unsigned int _strlen(char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
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
	list_t *new;

	if (str != NULL && head != NULL) /*primer caso de nulo*/
		{

	/*definimos espacio de memoria de list_t a new*/
	new = malloc(sizeof(list_t));
	if (new == NULL) /*caso de nulo para new*/
		return (NULL);

	new->str = strdup(str); /*definimos espacio de memoria a new->new*/
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
		}
		return (0);
}
