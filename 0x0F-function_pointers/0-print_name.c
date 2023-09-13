#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - that print name
 * @name: name of that we enter
 * @f: pointer of the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
