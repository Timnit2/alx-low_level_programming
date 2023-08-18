#include "main.h"
/**
 * print_line - printing character
 * @n: number of character
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
