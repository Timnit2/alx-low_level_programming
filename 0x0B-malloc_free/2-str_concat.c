#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * str_concat - concanating two string
 * str_concat - binding two words
 * @s1: string 1
 * @s2: string 2
 * Return: new concanateing, null if it is no string on s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int lengths1;
	int lengths2;
	char *new_result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lengths1 = strlen(s1);
	lengths2 = strlen(s2);

	*new_result = malloc(lengths1 + lengths2 + 1);

	if (new_result == NULL)
	{
		return (NULL);
	}
	memcpy(new_result, s1, lengths1);
	memcpy(new_result + lengths1, s2, lengths2 + 1);
	return (new_result);
}
