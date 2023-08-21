#include "main.h"
/**
 * _strlen - returing the length of string
 * @s: a pointer
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
