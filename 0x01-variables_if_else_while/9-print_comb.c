#include <stdio.h>
/**
 *main- main function
 *Return: always o
 */
int main(void)
{
int z;
for (z = 0 ; z < 10 ; z++)
{
putchar(z + '0');
putchar(',');
putchar(' ');
}
return (0);
}
