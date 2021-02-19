#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - half of string
 * @str: char
*/

void puts_half(char *str)
{
int a, b, n, x;
a = 0;

while (str[a] != '\0')
++a;
if ((a % 2) == 0)
n = a / 2;
else
n = (a - 1) / 2;
b = a - n;
for (x = b; x < a; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
