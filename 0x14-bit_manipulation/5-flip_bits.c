#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
*flip_bits -  function that returns the number of
* bits you would need to flip to get from one number to another.
*@n: long int
*@m: long int
*Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;

while (n || m)
{
if ((n & 1) != (m & 1))
{
i++;
}
n >>= 1;
m >>= 1;
}
return (i);
}
