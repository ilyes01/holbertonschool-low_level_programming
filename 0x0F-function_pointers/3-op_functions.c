#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*op_add - adds numbers
*@a: first
*@b: second
*Return: sum
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - subtracts b
*@a: first
*@b: second
*Return: difference of a
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul - multiplies a
*@a: first
*@b: second
*Return: multiplication of a
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
*op_div - divides a
*@a: first
*@b: second
*Return: integer division of a
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
*op_mod - find the remainder
*@a: first
*@b: second
*Return: remainder of the division of a by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
