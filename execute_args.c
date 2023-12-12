#include "shell.h"

/**
 * execute_args - map if command is a builtin or a process
 * @args: command and its flags
 *
 * Return: 1 on success, 0 otherwise
 */
int execute_args(char **args)
{
	char *builtin_funct_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int (*builtin_funct[])(char **) = {
		&own_cd,
		&own_env,
		&own_help,
		&own_exit
	};
	unsigned long int i = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}

	for (; i < sizeof(builtin_funct_list) / sizeof(char *); i++)
	{
		if (strcmp(args[0], builtin_funct_list[i]) == 0)
		{
			return ((*builtin_funct[i])(args));
		}
	}

	return (new_process(args));
}
