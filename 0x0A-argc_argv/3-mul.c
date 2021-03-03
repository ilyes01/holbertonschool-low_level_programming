#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - comonnn
* @argc: argument
* @argv: argument
* Return: as u like
*/

int main(int argc, char *argv[])
{
int i = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
}
return (0);
}
