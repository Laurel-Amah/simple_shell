#include "shell.h"

/**
 * own_exit - causes a normal process termination
 * @args: empty args
 *
 * Return: 0 to terminate the proces
 */
int own_exit(char **args)
{
	if (args[1])
	{
		return (atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
