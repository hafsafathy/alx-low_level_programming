#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations.
 * @argc: argument count.
 * @argv: array arguments.
 * Return: 0 sucess.
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
