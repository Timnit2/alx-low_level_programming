#include "main.h"
/**
 * _puts -printing stiring
 * @str: string pointe
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
