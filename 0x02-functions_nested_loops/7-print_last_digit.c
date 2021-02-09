#include "holberton.h"
/**
 * print_last_digit - last digit
 *@y:int
 * Return: 0 any way
 */
int print_last_digit(int y)
{
int i;

i = y % 10;
if (i >= 0)
{
_putchar(i + '0');
return (i);
}
else
{
_putchar(i * -1 + '0');
return (i * -1);
}
}
