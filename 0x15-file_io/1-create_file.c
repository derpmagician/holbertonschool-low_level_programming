#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - append to file
 * @filename: path to file
 * @text_content: content
 * Return: chars read
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
