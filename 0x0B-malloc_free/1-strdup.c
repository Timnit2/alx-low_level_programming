#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _strdup - duplicating to new memory
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new_str;
	int a, ary = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
		a++;

	*new_str = malloc(sizeof(char) * (a + 1));

	if (new_str == NULL)
		return (NULL);
	for (ary = 0; str[ary]; ary++)
		new_str[ary] = str[arry];
}
