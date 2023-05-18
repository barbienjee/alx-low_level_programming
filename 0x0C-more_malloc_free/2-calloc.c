#include "main.h"
#include <stdlib.h>
/**
  *_calloc - allocates memory for an array
  *@nmemb: number of elements in the array
  *@size: size of each element
  *Return: A pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	s = malloc(len);

	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
