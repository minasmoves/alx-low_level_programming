#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints a number and it's las along with whether its 
 * last dugit is 0, greater than 5, or less than 6 and 0.
 * Return: 0
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}

else if (n % 10 == 0)
{
print("last digit of %d is %d and is 0\n", n, n % 10);
}

else 
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}


return (0);
}

