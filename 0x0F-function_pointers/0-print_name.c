#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - prints name
*@name: name
*@f: pointer
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
f(name);
}
