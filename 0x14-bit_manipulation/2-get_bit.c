#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
*get_bit - function that returns the value of a bit at a given index.
*
*@n: long int
*@index: int index
*Return:0000
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index < 64)
{
return ((n >> index) & 1);
}
else
{
return (-1);
}
}
