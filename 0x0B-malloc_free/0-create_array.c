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
	char *striing;
	unsigned int a;

	striing = malloc(sizeof(char) * size);
	if (size == 0 || striing == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		striing[a] = c;
	return (striing);
}
