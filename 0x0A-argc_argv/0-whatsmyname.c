#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the programmme
 * @argv: arry of the argument
 * argc: no of arguments
 * Return: always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
