#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * 
 * 
 * 
 */
void free_list(list_t *head)
{

list_t *current, *next;

current = head;

while(current != NULL)
{
    next = current->next;
    free(current->str);
    free(current);
    current = next;
}

}