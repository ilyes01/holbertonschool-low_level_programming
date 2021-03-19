#include "lists.h"
#include <stdlib.h>
/**
*free_list - function that frees
*@head: pointer to head
*Return: 0
*/
void free_list(list_t *head)
{
list_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
