#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - function that prints a name
*@name: name
*@f: pointer
**/
void print_name(char *name, void (*f)(char *a))
{
	if (name != NULL && f != NULL)
	f(name);
}
