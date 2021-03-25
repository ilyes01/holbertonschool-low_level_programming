#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
*set_bit - function that sets the value of a bit to 1 at a given index.
*@n: long int
*@index: int index
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index < 64)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
