#include "holberton.h"
/**
* print_triangle - taaada
* @size: int
* Return: tsaref
*/
void print_triangle(int size)
{
int x, y, z;

x = 0;
if (size > 0)
{
while (x < size)
{
z = size - x;
while (z > 1)
{
_putchar(' ');
z--;
}
y = 0;
while (y <= x)
{
_putchar('#');
y++;
}
x++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
