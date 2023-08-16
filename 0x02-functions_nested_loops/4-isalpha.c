#include "main.h"

/**
 * _isalpha - checks for l and u case letter
 * @c: checking alphabet
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= ''Z'))
		return (1);
	else
		return (0);
}
