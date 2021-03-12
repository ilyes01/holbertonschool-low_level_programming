#include "function_pointers.h"
#include <stddef.h>
/**
*int_index - function that searches for an integer
*@array: array..
*@size: number
*@cmp: pointer
*Return: as u like
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
	if (size <= 0)
	return (-1);
		if (size && cmp != NULL && array != NULL)
		{
			while (i < size)
			{
			if (cmp(array[i]) != 0)
			return (i);
			i++;
			}
		}
	return (-1);
}
