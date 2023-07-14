#include <stdio.h>
#include <stdlib.h>

/**
 * checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
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
	if else (num1 = checknum(v, 1), num2 = checknum(v, 2))
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
