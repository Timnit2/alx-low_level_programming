#include "main.h"
/**
 * *_strncat - concatenates two string n times
 * Return: dest
 * @dest: string pointer
 * @src: string pointer
 * @n: no of stirng that concatenates
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len2] != ''\0)
	{
		len2++;
	}
	while (src[len1] != '\0' && len1 < n)
	{
		dest[len2] = src[len1];
		len2++;
		len1++;
	}
	dest[len2] = '\0';
	return (dest);
