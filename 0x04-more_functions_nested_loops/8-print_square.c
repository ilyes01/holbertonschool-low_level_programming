#include "holberton.h"
/**
*print_square - check the code for Holberton School students.
*@size: taille
* Return: anyways
*/
void print_square(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
for (j = 0 ; j < size ; j++)
{
for (i = 0 ; i < size ; i++)
{
_putchar ('#');
}
_putchar('\n');
}
}
