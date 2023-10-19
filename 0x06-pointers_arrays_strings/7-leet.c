#include "main.h"
/**
 *leet - encode into 1337 speak
 *@n: input value
 *Return: n value
 */
char *leet(char *n)
{
	int q, a;
	char s1[] = "aAeEoOtTlL"
	char s2[] = "4433007711"

	for (q = 0; n[q] != '\0'; q++)
	{
		for (a = 0; a < 10; a++)
		{
		if (n[q] == s1[a])
		{
		n[q] = s2[a];
		}
		}
	}
return (n);
}
