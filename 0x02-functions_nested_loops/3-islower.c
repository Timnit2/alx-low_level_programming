#include "main.h"

/**
 * _islower - checking the entry if it is lower case
 * @c: the character that checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
