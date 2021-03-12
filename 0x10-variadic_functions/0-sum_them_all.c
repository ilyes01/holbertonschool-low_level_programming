#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function that returns the sum
*@n: number
*Return: sum
**/
int sum_them_all(const unsigned int n, ...)
{
unsigned int x = 0, sum = 0;
va_list list;
if (n == 0)
return (0);
va_start(list, n);
for (x = 0; x < n; x++)
{
sum += va_arg(list, unsigned int);
}
va_end(list);
return (sum);
}
