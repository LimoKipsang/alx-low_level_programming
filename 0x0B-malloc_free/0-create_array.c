#include "main.h"

/**
 *create_array - create array
 *@size: size of array
 *@c: character to store in array
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int p;
if (size == 0)
return (NULL);
ar = malloc(sizeof(char) * size);
if (ar == NULL)
return (NULL);
for (p = 0; p < size; p++)
ar[p] = c;
return (ar);
}
