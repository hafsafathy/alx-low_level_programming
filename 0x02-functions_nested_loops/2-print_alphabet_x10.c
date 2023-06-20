#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line (10 times).
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	j= 0;
	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
