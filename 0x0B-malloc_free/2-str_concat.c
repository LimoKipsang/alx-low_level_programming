#include "main.h"

/**
 *str_concat - concateanetes two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to new allocated space
 */
char *str_concat(char *s1, char *s2)
{
int k;
int s1len = 0;
int s2len = 0;
char *output;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (k = 0; s1[k] != '\0'; k++)
s1len++;
for (k = 0; s2[k] != '\0'; k++)
s2len++;
output = malloc(sizeof(char) * (s1len + s2len) + 1);
if (output == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
output[k] = s1[k];
for (k = 0; s2[k] != '\0'; k++)
output[s1len + k] = s2[k];
return (output);
}
