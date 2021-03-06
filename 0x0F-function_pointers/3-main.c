#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
*main - function main
*@argc: Number of argument
*@argv: Argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = op(num1, num2);
	printf("%d\n", res);
	return (0);
}
