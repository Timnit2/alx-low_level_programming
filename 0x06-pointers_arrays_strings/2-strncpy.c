#include "main.h"
/**
 * *_strncpy - copies like strncpy
 * Return: dest
 * @dest: pointer string
 * @src: pointer
 * @n: no of strint that concatenate
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0;

	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\n';
		len++;
	}
	return (dest);
}
