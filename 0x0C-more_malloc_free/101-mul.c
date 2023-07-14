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
	int num1, num2, mul;

	if (c != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(v[1]);
		num2 = atoi(v[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
}
