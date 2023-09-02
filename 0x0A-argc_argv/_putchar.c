#include <stdio.h>
#include "main.h"
/**
 * _putchar - write character to c
 * @c: the character
 * Return: always 1
 * onerror, -1 is returned anderror is set appropriatele
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
