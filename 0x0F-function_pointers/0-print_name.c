#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - that print name
 * @name: name of that we enter
 * @f: pointer of the function
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
