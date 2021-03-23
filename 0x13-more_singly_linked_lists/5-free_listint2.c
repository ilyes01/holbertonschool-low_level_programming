#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint2 -  function that frees lists
*@head: pointeur
*Return: 0
**/
void free_listint2(listint_t **head)
{

	listint_t *tmp;
	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
}
