#include "main.h"
/**
 * more_numbers - printing no ten times
 */
void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}

