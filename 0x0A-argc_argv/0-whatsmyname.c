#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the programmme
 * @argv: arry of the argument
 * @argc: no of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
