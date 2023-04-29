#include <stdio.h>
/**
 *main - prints the sum of all the multiples of 3 or 5 below 1024
 *Return: 0
 */
int main(void)
{
	int i, x;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		x += i;
	}
	i++;
	}
	printf("%d\n", x);
	return (0);
}
