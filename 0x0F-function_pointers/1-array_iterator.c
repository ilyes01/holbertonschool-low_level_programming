#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator - function that executes
*@array: array
*@size: size of array
*@action: pointer to function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size && action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
