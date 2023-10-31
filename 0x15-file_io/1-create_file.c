#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function with two arguments
 * @filename: pointer to string name
 * @text_content: pointer to string contents
 *
 * Description: creates a file
 * Return: 1 on success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fp = 0;
	int out = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(fp);
		return (1);
	}

	output = write(fp, text_content, count);
	if (out == -1 || out != count)
		return (-1);

	close(fp);
	return (1);
}
