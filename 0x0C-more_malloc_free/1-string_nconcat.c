#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - concanateing two strin
 * @s1: string one
 * @s2: string teo
 * @n: the possiblity no of sttring s2
 * Return: null,conc if it is possible
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int lengths1, lengths2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lengths1 = strlen(s1);
	lengths2 = strlen(s2);
	if (n >= lengths2)
		n = lengths2;
	conc = malloc(lengths1 + n + 1);
	if (conc == NULL)
		return (NULL);
	strcpy(conc, s1);
	strncat(conc, s2, n);
	return (conc);
}
