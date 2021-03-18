#include "lists.h"
#include <stdio.h>
/**
 * print_list - imrpime todos los elementos de size_t
 * @h: puntero al inicio de la lista
 * Return: retorna el numero de nodos
 */

size_t print_list(const list_t *h)
{
	const list_t *pointer;
	unsigned int i; /* obtiene el numero de nodos*/

	pointer = h; /* puntero a puntero para obtener la lista*/

	/*usamos un for para obtener el numero nodos*/
	for (i = 0; pointer; i++)
	{
		/*procedemos a imprimir los elementos*/
		/*dirigimos el pointer a cada elemento de de la estructura a imprimir*/
		printf("[%u] %s\n", pointer->len, pointer->str);
		pointer = pointer->next;
	}
	return (i);/*retornamos la cantidad de nodos que se representan en i*/
}
