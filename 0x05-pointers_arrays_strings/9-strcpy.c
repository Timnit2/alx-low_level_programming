#include "main.h"
/**
 * *_strcpy - coping the string by pointer
 * @dest: pointer
 * @src: pointer
 * Return: pointr
 */
char *_strcpy(char *dest, char *src)
{
	char *pointr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pointr);
}
