#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_realloc - rellocates memory
 *@ptr: ...
 *@old_size:size of the memory
 *@new_size:size of the memory
 *Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		optr = malloc(new_size);

		if (optr == NULL)
			return (NULL);

		return (optr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	optr = malloc(new_size);

	if (optr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		optr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (optr);
}
