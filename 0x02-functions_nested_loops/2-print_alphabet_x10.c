#include "main.h"

/**
 * print_alphabet_x10 - printing small letter 10x
 */
void print_alphabet_x10(void)
{
	int mm = 0;

	while (mm++ < 10)
	{
		char l = 'a';

		while (l <= 'z')
			_putchar(l++);
		if (mm < 11)
			_putchar('\n');
	}
}
