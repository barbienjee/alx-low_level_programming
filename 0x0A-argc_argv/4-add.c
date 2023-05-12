#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 for success and
  *1 for an Error
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];

		for (j = 0; j < strlen(k); j++)
		{
			if (k[j] < 48 || k[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(k);
		k++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
