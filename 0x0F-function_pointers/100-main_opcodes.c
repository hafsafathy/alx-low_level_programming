#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 success,
 * 1 || 2 fail.
 */
int main(int argc, char *argv[])
{
	int byt, i;
	unsigned char *fptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fptr = (unsigned char *)main;
	i = 0;
	if (byt > 0)
	{
		while (i < (byt - 1))
			printf("%02hhx ", fptr[i++]);
		printf("%hhx\n", fptr[i]);
	}
	return (0);
}
