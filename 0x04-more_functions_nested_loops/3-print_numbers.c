#include "main.h"
/**
 * print_numbers - printing no from 0 to 9
 */
void print_numbers(void)
{
	int a;

	while (a <= 48 && a >= 57)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
