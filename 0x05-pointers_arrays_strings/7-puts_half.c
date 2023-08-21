#include "main.h"
#include <string.h>
/**
 * puts_half - printing half of string
 * @str: pointer
 */
void puts_half(char *str)
{
	int lengths = strlen(str);
	int a = (lengths - 1) / 2 + 1;

	while (a < lengths)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
