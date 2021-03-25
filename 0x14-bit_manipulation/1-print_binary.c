#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
*print_binary - unction that prints the binary representation of a number.
*
*@n: long int
*/
void print_binary(unsigned long int n)
{

if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
