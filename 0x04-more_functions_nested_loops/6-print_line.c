#include "holberton.h"
/**
* print_line - prints a straight line.
* @n: int
* Return: 0
*/
void print_line(int n)
{
int x;
x = 0;
if (n > 0)
{
while (x < n)
{
_putchar('_');
x++;
}
}
_putchar('\n');
}
