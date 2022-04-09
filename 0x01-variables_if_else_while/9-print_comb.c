#include <stdio.h>
/**
 * main - main block
 * description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * return: 0
 */
int main(void)
{
int z = 0;

while (z < 10)
{
putchar(48 + z);
if (z !=9)
{
putchar(',');
putchar(' ');
}
z++;
}
putchar('\n');
return (0);
}
