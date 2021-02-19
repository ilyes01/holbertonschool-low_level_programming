#include "holberton.h"
#include <stdio.h>
/**
* print_array - print_array  a string
* @a: pointer
* @n: int
*/
void print_array(int *a, int n)
{
int x;
	for (x = 0; x <= n - 1; ++x)
{
	if (x != (n - 1))
{
		printf("%d, ", a[x]);
}
	else
{
printf("%d", a[x]);
}
}
printf("\n");
}
