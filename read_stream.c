#include "shell.h"

/**
 * read_stream -read a line from the stream
 *
 * Return: pointer that points to the read line
 */
char *read_stream(void)
{
	int bufsize = 1024;
	int i = 0;
	char *line = malloc(sizeof(char) * bufsize);
	int chars;

	if (line == NULL)
	{
		fprintf(stderr, "allocation in read_stream");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		chars = getchar();
		if (chars == EOF)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else if (chars == '\n')
		{
			line[i] = '\0';
			return (line);
		}
		else
		{
			bufsize += bufsize;
			line = realloc(line, bufsize);
			if (line == NULL)
			{
				fprintf(stderr, "reallocation error in rad_stream");
				exit(EXIT_FAILURE);
			}
		}
	}
}

