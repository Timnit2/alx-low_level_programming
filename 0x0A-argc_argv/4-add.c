#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints sum of posotive no
 * @argc: argument counter that enters to argv
 * @argv: argument vecor
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int u, sum = 0;
	char *i;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			i = argv[a];
			for (u = 0; u < strlen(i); u++)
			{
				if (i[u] < 48 || i[u] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(i);
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

