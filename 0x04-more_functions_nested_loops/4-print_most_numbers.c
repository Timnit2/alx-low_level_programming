#include "main.h"
/**
 * print_most_numbers -printing digit except 2 and 4
 * @a: numbers
 */
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
