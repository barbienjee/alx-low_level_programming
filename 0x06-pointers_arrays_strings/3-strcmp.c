#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to the first string to be compared
 *@s2: A pointer to the second string to be compared
 *Return: 0, negative difference , positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
