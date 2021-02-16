#include "holberton.h"
#include <stdio.h>
/**
* _puts - Function
* @str: pointer
*/
void _puts(char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
