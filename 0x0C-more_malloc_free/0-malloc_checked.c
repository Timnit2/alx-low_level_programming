#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alocateing memory using malloc fuction
 * @b: integerthat will store
 * Return: 98 if it is Null,ptr if it exist
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
