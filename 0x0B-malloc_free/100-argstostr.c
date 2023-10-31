#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - converts the params passed to the programe to string
 *@ac: the arguments count
 *@av: the arguments vector
 *Return: ..
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, p = 0, g = 0, i = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (p < ac)
	{
		while (av[p][g])
		{
			ch++;
			g++;
		}

		g = 0;
		p++;
	}

	t = malloc((sizeof(char) * ch) + ac + 1);

	p = 0;
	while (av[p])
	{
		while (av[p][g])
		{
			t[i] = av[p][g];
			i++;
			g++;
		}

		t[i] = '\n';

		g = 0;
		i++;
		p++;
	}

	i++;
	t[i] = '\0';
	return (t);
}
