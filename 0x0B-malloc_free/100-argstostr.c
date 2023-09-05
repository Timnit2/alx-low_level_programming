#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concanating string
 * @ac: one string
 * @av: pointer to string
 * Return: null if it is ac and av null
 */
char *argstostr(int ac, char **av)
{
	char *rep;
	int length = 0;
	int offset = 0;
	int a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		length += strlen(av[a]) + 1;
	}
	rep = malloc(length * sizeof(char));
	if (rep == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		strcpy(rep + offset, av[a]);
		offset += strlen(av[a]);
		rep[offset++] = '\n';
	}
	return (rep);
	return (0);
}
