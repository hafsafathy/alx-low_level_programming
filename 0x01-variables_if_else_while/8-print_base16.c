#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int Hex;

	for (Hex = 0; Hex < 10; Hex++)
	{
		putchar(Hex + 48);
	}
	for (Hex = 0; Hex < 6; Hex++)
	{
		putchar(Hex + 97);
	}
	putchar('\n');
	return (0);
}
