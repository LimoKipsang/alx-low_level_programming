#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array using calloc
 *@nmemb: number of array members
 *@size: size of array
 *Return: pointer to newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = calloc(nmemb, size);
	if (r == NULL)
		return (NULL);
	else
		return (r);
}
