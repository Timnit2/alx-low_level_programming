#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: pointer that hold string
 * Return: if it is 0 othrwise print
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	while (a > 0)
	{
		_putchar(s[--a]);
	}
	_putchar('\n');
}
