#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers.
 * @c: number of arguments.
 * @v: arguments.
 * Return: Nothing
 */
int main(int c, char **v)
{
	int n1, n2, res;

	if (c != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(v[1]);
		n2 = atoi(v[2]);
		res = n1 * n2;
		printf("%d\n", res);
		return (0);
	}
}
