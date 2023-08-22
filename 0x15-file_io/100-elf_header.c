#include <stdio.h>

/**
 * main - function
 * @argc: The number of arguments
 * @argv: pointer 
 * Return: 1
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
