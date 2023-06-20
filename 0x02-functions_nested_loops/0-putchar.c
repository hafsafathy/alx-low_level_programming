#include "main.h"

/**
 * main - Check description
 * Description: It prints ' _putchar'  followed by a new line.
 * Return:  always  0(success) .
 */
int main(void)
{
	char input[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(input[a]);
	_putchar('\n');

	return (0);
}
