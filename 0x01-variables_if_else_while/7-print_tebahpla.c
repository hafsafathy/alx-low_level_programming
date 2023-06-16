#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 25; c >= 0; c--)
	{
		putchar(c + 97);
	}
	putchar('\n');
	return (0);
}
