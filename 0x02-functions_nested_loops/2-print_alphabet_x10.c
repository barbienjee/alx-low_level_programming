#include "main.h"
/**
 *print_alphabet_x10 - Make alphabet x10
 *Return: void
 */
void print_alphabet_x10(void)
{
	char n;
	int i = 0;

	while (i <= 9)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	i++;
	}
}
