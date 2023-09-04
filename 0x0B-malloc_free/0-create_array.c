#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *  *create_array -create an array of char
 *
 * @size: size of an array
 * @c: is the character with which array
 * Return: NULL if size 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arryname = malloc(size * sizeof(char));

	if (arryname == NULL)
	{
		return (NULL);
	}
	for (unsigned int a = 0; a < size; a++)
	{
	arryname[a] = c;
	}
return (arryname);
}
