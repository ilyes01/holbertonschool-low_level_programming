#include "holberton.h"
#include <stdio.h>

/**
* rev_string - string
* @s: pointer
*Return: comooon
*/

void rev_string(char *s)
{
int a, b;
char str;
a = 0;
b = 0;
while (*(s + a) != '\0')
{
a++;
}

for (b = 0; b < a / 2; b++)
{
str = *(s + b);
*(s + b) = *(s + ((a  - 1) - b));
*(s + ((a - 1) - b)) = str;
}
}
