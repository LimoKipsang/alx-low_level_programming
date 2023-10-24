#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: is always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int p = 0;
	int q = n;

	for (; p < q ; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

