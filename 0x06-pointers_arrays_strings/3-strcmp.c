#include "main.h"
/**
 * _strcmp - a function that work exactly strcmp
 * @s1: pointer string
 * @s2:astring that compare with s1
 * Return:*s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
