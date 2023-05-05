#include "main.h"
#include <stdio.h>
/**
 *print_buffer - prints a buffer
 *@b: buffer
 *@size: size
 */
void print_buffer(char *b, int size)
{
	int c, d, e;

	c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (c < size)
	{
		d = size - c < 10 ? size - c : 10;
		printf("%08x: ", c);
		for (e = 0; e < 10; e++)
		{
		if (e < d)
			printf("%02x", *(b + c + e));
		else
			printf(" ");
		if (e % 2)
		{
			printf(" ");
		}
		}
		for (e = 0; e < d; e++)
		{
			int f = *(b + c + e);

			if (f < 32 || f > 132)
			{
				f = '.';
			}
			printf("%c", f);
		}
		printf("\n");
		c += 10;
	}
}
