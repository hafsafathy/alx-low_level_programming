#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @un: username
 * @l: length of username
 * Return: the biggest number
 */
int f4(char *un, int l)
{
	int c;
	int ch;
	unsigned int num;

	c = *un;
	ch = 0;

	while (ch < l)
	{
		if (c < un[ch])
			c = un[ch];
		ch += 1;
	}

	srand(c ^ 14);
	num = rand();

	return (num & 63);
}

/**
 * f5 - multiplies each char of username
 * @un: username
 * @l: length of username
 * Return: multiplied char
 */
int f5(char *un, int l)
{
	int c;
	int ch;

	c = ch = 0;

	while (ch < l)
	{
		c = c + un[ch] * un[ch];
		ch += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @un: username
 * Return: a random char
 */
int f6(char *un)
{
	int c;
	int ch;

	c = ch = 0;

	while (ch < *un)
	{
		c = rand();
		ch += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char key[7];
	int l, c, ch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (l = 0; argv[1][l]; l++)
		;

	key[0] = ((char *)alph)[(l ^ 59) & 63];

	c = ch = 0;
	while (ch < l)
	{
		c = c + argv[1][ch];
		ch = ch + 1;
	}
	key[1] = ((char *)alph)[(c ^ 79) & 63];

	c = 1;
	ch = 0;
	while (ch < l)
	{
		c = argv[1][ch] * c;
		ch = ch + 1;
	}
	key[2] = ((char *)alph)[(c ^ 85) & 63];

	key[3] = ((char *)alph)[f4(argv[1], l)];

	key[4] = ((char *)alph)[f5(argv[1], l)];

	key[5] = ((char *)alph)[f6(argv[1])];
	key[6] = '\0';
	for (c = 0; key[c]; c++)
		printf("%c", key[c]);
	return (0);
}
