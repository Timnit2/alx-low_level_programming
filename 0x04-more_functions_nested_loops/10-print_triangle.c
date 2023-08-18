#include "main.h"
/**
 * print_triangle - printing a tringle shape
 * @size: is the size of tringla
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}
}
