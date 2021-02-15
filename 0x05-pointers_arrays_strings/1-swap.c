#include "holberton.h"
#include <stdio.h>
/**
* swap_int - adih baliz
*@b:pointer
*@a:pointer
* Return: 0
*/
void swap_int(int *a, int *b)
{
int i;
i  = *b;
*b = *a;
*a = i;
}
