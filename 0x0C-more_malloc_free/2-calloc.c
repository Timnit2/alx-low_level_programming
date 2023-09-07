#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _calloc -allocating memory of array
 * @nmemb: no of array
 * @size: sizeof array
 * Return: null if not exist,ptr if not null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, noB;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	noB = nmemb * size;/* noB no of bytes*/
	ptr = malloc(noB);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < noB; a++)
		((char *)ptr)[a] = 0;
	return (ptr);
}

