#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * strlen - encuentra la longitud de un string
 * @str: string de donde se sacara la longitud
 * 
 * Return: Retorna la longitud del string.
 */

unsigned int _strlen(char *str)
{
    int c = 0;
while(*str)
{
    str++;
    c++;
}
   
    return (c);
}

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    if (str == NULL) /*primer caso de nulo*/
        return (NULL);

    /*definimos espacio de memoria de list_t a new*/
    new = malloc(sizeof(list_t));
    if (new == NULL) /*caso de nulo para new*/
        return (NULL);

    new->str = strdup(str); /*definimos espacio de memoria a new->new*/
    if (new->str == NULL)   /*caso nulo par new->str*/
        return (NULL);
    new->len = _strlen(new->str);
    new->next = *head;
    *head = new;
    return (new);
}