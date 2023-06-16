#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; c++)
	{
		putchar(c + 97);
	}
	for (c = 0; c < 26; c++)
	{
		putchar(c + 65);
	}
	putchar('\n');
	return (0);
}
