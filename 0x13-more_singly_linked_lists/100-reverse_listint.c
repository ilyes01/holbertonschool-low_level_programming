#include "lists.h"
/**
*reverse_listint - functon that reverses
*@head: pointer to the given
*Return: pointer
*/
listint_t *reverse_listint(listint_t **head)
{

listint_t *prev, *next;
	if (*head == NULL || head == NULL)
	return (NULL);
		if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
			while (*head)
			{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
			}
	*head = prev;
return (*head);
}
