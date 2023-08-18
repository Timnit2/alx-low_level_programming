#include "main.h"
/**
 * print_line - printing character
 * @n: number of character
 * Return: void
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
