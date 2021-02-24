#include "holberton.h"
/**
*factorial - check
*@n: var
*
*Return: 0
*/
int factorial(int n)
{
if (n == 1 || n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
