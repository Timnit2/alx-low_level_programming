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
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for ( ; len < n; len++)
		dest[len] = '\0';
	return (dest);
}
