#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 (success), 1 when print Error.
 */
int main(int argc, char *argv[])
{
	int num;
	int plus = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		plus += 1;
	}
	printf("%d\n", plus);
	return (0);
}
