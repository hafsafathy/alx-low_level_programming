#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checknum - determines length of the number
 * and checks if number is in base 10.
 * @v: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int checknum(char **v, int n)
{
	int ln;

	for (ln = 0; v[n][ln]; ln++)
		if (!isdigit(v[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}
/**
 * main - program that multiplies two positive numbers.
 * @c: number of arguments.
 * @v: arguments.
 * Return: 0.
 */
int main(int c, char **v)
{
	int num1, num2, mul;

	if (c != 3)
		printf("Error\n");
		exit(98);
	num1 = checknum(v, 1), num2 = checknum(v, 2)
	else
	{
		num1 = atoi(v[1]);
		num2 = atoi(v[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
}
