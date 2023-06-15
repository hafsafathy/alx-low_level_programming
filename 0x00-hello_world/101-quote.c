#include<stdio.h>
#include <unistd.h>

/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, txt, 59);
	return (1);

}
