#include "main.h"
/**
 * puts2 - printing every other character
 * @str:pointer that hold character
 */
void puts2(char *str)
{
	int a = 0;

	while (str[1] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
