#include <stdio.h>

/**
 * main - entry point 
 *
 * Description: Print numbers 0 to 9 on one line 
 * Return: 0
 */
int main(void)
{
int i;

for (i = 0; i <=9; ++i)
putchar('o' + i);

putchar('\n');

return (0);
}