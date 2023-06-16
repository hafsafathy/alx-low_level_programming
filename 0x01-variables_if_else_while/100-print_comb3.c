#include <stdio.h>
/**
 * main - main
 * Return: 0;
 */
int main(void)
{
	int num1 = 48;
	int num2 = num1 + 1;

	while (num1 <= 56)
	{
		while (num2 <= 57)
		{
			putchar(num1), putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(','), putchar(' ');
			}
			num2++
		}
		num1++
	}
	putchar('\n');
	return (0);
}
