#include "main.h"
#include <string.h>
/**
 * is_palindrome - to check whether the first and the last character are equal
 * @s:is a pointer of string
 * Return: 1 if if a string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i = strlen(s);

	if (i <= 1)
	{
		return (1);
	}
	if (s[0] != s[i - 1])
	{
		return (0);
	}
	s[i - 1] = '\0';
	return (is_palindrome(s + 1));
}
