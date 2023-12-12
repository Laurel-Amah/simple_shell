#include "shell.h"

/**
 * own_cd - changes the working directory of the current shell execution env
 * @args: target directory
 *
 * Return: 1 on success, 0 othrwise
 */
int own_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in own_cd.c: changing directory\n");

		}
	}
	return (-1);
}
