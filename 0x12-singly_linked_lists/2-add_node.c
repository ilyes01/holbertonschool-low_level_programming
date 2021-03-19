#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - function that adds
*@head: pointer
*@str: string
*Return: number
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int sum = 0;

	new = malloc(sizeof(list_t));
	if (!new || !str)
	return (NULL);
	for (sum = 0; str[sum]; sum++)
		;
	new->str = strdup(str);
	new->len = sum;
	new->next = NULL;
	if (*head != NULL)
	new->next = *head;
	*head = new;
	return (new);
}
