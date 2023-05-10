#include "main.h"
#include "string.h"
/**
  *is_palindrome - checks if s is a palindrome
  *@s: string to be checked
  *Return: 1 if a string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	if (*s == *(s + strlen(s) - 1))
	{
		*(s + strlen(s) - 1) = '\0';
		int result = is_palindrome(s + 1);

		*(s + strlen(s) - 1) = *(s + strlen(s));
		return (result);
	}
	return (1);
}
