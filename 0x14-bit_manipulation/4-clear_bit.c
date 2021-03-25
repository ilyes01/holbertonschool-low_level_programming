#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
*clear_bit - function that sets the value of a bit to 0 at a given index.
*@n: long int
*@index: int index
*Return: 1 ou -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < 64)
{
*n = *n & ~(1 << index);
return (1);
}
return (-1);
}
