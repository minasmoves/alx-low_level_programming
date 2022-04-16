#include "main.h"
/**
 * _isdigit - checks if the no is b/n 0-9
 * @c: input no
 * Return: 1 if it is a no (0 - 9) , 0 oherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar("\n");
}

