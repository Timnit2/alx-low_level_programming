#include "main.h"
#include <stdio.h>
/**
 * main - prints all the args content
 * @argc: argument counter
 * @argv: argument array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
