#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename.
 * @letters: is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nr, nw;
	char *b;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nr = read(f, b, letters);
	nw = write(STDOUT_FILENO, b, nr);

	close(f);

	free(b);

	return (nw);
}
