#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 * main-main function
 *
 * RETURN:always 0
 */
int main(void)
{
int n;
int s;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
s = n % 10;
if (s > 5)
printf("last digit of %d is %d and is greater than 5", n, s);
else if (s == 0)
printf("last digit of %d is %d and is 0", n, s);
else if (s < 6 && s != 0)
printf("last digit of %d is %d and is less than 6 and not 0", n, s);
printf("\n");
return (0);
}
