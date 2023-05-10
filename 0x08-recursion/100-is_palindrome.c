#include "main.h"
#include "string.h"
/**
  *is_palindrome - checks if s is a palindrome
  *@s: string to be checked
  *Return: 1 if a string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int i = 0;
	int k = strlen(s) - 1;

	while (i < k)
	{
		if (s[i] != s[k])
		{
			return (0);
		}
		i++;
		k--;
	}
	return (1);
}
