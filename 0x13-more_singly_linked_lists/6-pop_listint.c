#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - aaaaaaahdrntjy
* @head: pointer
* Return: var.
*/
int pop_listint(listint_t **head)
{
listint_t *p;
int i;
if (head == NULL || *head == NULL)
return (0);
p = *head;
i = (*head)->i;
*head = (*head)->next;
free(p);
return (i);
}
