#include "main.h"
/**
 * print_diagonal - printing diagonal style
 * @n: is the no of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
