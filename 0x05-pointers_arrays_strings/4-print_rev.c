#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: pointer that hold string
 * Return: if it is 0 othrwise print
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;
	print_rev(s + 1);
	_putchar(*s);
}
