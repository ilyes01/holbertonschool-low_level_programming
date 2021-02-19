#include "holberton.h"
#include <stdio.h>

/**
* puts2 - function
* @str: pointer
*Return: baliz
*/

void puts2(char *str)
{
int n;
n = 0;
while (str[n] != '\0')
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
_putchar('\n');
}
