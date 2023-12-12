#include "shell.h"

/**
 * own_help - print help
 * @args: arguments
 *
 * Return: 1 if sucess, 0 otherwise
 */
int own_help(char **args)
{
	char *builtin_funct_list[] = { "cd", "env", "help", "exit" };
	unsigned long int i = 0;
	(void)(**args);

	printf("\n---help simple_shell---\n");
	printf("Enter a command and its arguments\n");
	printf("Built-in commands: \n");
	for (; i < sizeof(builtin_funct_list) / sizeof(char *); i++)
	{
		printf(" -> %s\n", builtin_funct_list[i]);
	}
	return (-1);
}
