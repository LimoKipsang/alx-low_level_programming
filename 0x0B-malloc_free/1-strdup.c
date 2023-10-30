#include "main.h"

/**
 *_strdup - copies string to new allocated memory
 *@str: strign to copy to new memory
 *Return: pointer to new memory
 */
char *_strdup(char *str)
{
char *g;
int j = 0;
int l;
if (str == NULL)
return (NULL);
for (l = 0; str[l] != '\0'; l++)
j++;
g = malloc(sizeof(char) * j + 1);
if (g == NULL)
return (NULL);
for (l = 0; str[l] != '\0'; l++)
g[l] = str[l];
return (g);
}
