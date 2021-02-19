#include "holberton.h"
/**
*print_rev - print
*@s: value
*
*/
void print_rev(char *s)
{
char *n;

n = s;
while (*s != '\0')
{
s++;
}
while (s != n)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
