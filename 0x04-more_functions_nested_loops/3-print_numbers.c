#include "main.h"

/**
 * _print_numbers - prints the number zero to nine
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{

int i;

i = 0;

for (i = 0; i < 10; i++)

_putchar(i + '0');

_putchar ('\n');
}
