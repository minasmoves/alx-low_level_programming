#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: the number in question
 *
 * return: value of last digit 
 */
int print_last_digit(int n);
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;

_putchar(last_digit + 'a');

return (last_digit);
}
