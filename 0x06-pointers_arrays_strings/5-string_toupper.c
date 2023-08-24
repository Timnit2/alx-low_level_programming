#include "main.h"
/**
 * *string_toupper - converting to upper case
 * Return: str
 * @str:the letter that we are converting
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		str[a] = toupper(str[a]);
		a++;
	}
	return (str);
}
