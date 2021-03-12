#include <stdio.h>
#include <stdlib.h>
/**
*main - prints opcode
*@argc: argument
*@argv: arg
*Return: entier
*/
int main(int argc, char *argv[])
{
int x, y;
unsigned char *p;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
y = atoi(argv[1]);
		if (y < 0)
		{
		printf("Error\n");
		exit(2);
		}
p = (unsigned char *)main;
x = 0;
	if (y > 0)
	{
		while (x < (y - 1))
		printf("%02hhx ", p[x++]);
		printf("%hhx\n", p[x]);
	}
return (0);
}
