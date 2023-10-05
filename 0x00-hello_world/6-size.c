#include <stdio.h>
/**
 * main- 
 * RETURN: always 0
 *
 */
int main(void)
{
printf("Size of char: %lu byte(s)", sizeof(char));
printf("Size of int: %lu byte(s)", sizeof(int));
printf("Size of long: %'lu byte(s)", sizeof(long));
printf("Size of long long: %lu byte(s)", sizeof(long long));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}
