#include "holberton.h"
/**
*print_number - print
*@n: int
* Return: come onnnn
*/
void print_number(int n)
{
int r = 1;
unsigned int y, x;

if (n < 0)
{
_putchar('-');
x = -n;
}
else
{
x = n;
}
y = x / 10;
while (y != 0)
{
y /= 10;
r *= 10;
}
while (r != 1)
{
_putchar((x / r) +'0');
x %= r;
r /= 10;
}
_putchar(x + '0');
}
