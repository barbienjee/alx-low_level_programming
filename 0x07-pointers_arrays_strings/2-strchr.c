#include <stdio.h>
#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character
 *Return: The result or NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
