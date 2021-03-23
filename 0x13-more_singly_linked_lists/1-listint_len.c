#include "lists.h"
/**
*listint_len - function that returns the number
*@h: pointeur
*Return: size
*/
size_t listint_len(const listint_t *h)
{
size_t x = 0;
while (h)
{
x++;
h = h->next;
}
return (x);
}
