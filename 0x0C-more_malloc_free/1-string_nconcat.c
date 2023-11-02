#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates string
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *p;
	unsigned int o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (o = 0; s1[o] != '\0'; o++)
		s1len++;
	for (o = 0; s2[o] != '\0'; o++)
		s2len++;

	p = malloc(sizeof(char) * (s1len + n) + 1);
	if (p == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (o = 0; s1[o] != '\0'; o++)
			p[o] = s1[o];
		for (o = 0; s2[o] != '\0'; o++)
			p[s1len + o] = s2[o];
		p[s1len + o] = '\0';
	}
	else
	{
		for (o = 0; s1[o] != '\0'; o++)
			p[o] = s1[o];
		for (o = 0; o < n; o++)
			p[s1len + o] = s2[o];
		p[s1len + o] = '\0';
	}
	return (p);
}
