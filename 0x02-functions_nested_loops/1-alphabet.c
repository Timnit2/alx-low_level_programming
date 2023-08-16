#include "main.h"

/**
 * print_alphabet - Prints all lowercase letters of the alphabet
 */
void print_alphabet(void)
{
	char mm = 'a';

	while (mm <= 'z')
	{
		_putchar(mm);
		mm++;
	}
	_putchar('\n');
}
