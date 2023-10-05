#include "hash_tables.h"

/**
 * hash_djb2 -  hash function implementing the djb2 algorithm.
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int i;

	h = 5381;
	while ((i = *str++))
	{
		h = ((h << 5) + h) + c; 
	}
	return (h);
}
