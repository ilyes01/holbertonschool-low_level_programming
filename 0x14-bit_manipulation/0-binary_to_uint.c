#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
*binary_to_uint - unction that converts a binary number to an unsigned int
*@b: pointer
*Return: do what you want
*/

unsigned int binary_to_uint(const char *b)
{

int i;
unsigned int x = 0;

if (!b)
return (0);
i = 0;
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
for (i = 0; b[i] != '\0'; i++)
{
x <<= 1;
if (b[i] == '1')
{
x += 1;
}
}
return (x);
}
