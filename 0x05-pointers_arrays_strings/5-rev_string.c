#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string pointer
 */
void rev_string(char *s)
{
	int a = 0;
	int b = strlen(s) - 1;
	char temp;

	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
