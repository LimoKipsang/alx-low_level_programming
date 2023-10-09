#include <stdio.h>
/**
 *main- main function
 *
 *Return: always o
 */
int main(void)
{
char m;
int i;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (m = 'a' ; m <= 'f' ; m++)
putchar(m);
putchar('\n');
return (0);
}
