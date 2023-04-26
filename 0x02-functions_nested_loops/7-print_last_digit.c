#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@d: The number to be printed
 *Return: Value of the last digit of the number
 */
int print_last_digit(int d)
{
	int last;

	last = d % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

