#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - check
*@a:var
*@size:var
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int j;
int n = 0;
int g = 0;
j = size * size;
while  (i < j)
{
n += a[i];
i += size + 1;
}
i = size - 1;
while (i < (j - 1))
{
g += a[i];
i += size - 1;
}
printf("%d, %d\n", n, g);
}
