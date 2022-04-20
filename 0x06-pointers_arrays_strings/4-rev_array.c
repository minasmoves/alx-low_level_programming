#include "main.h"
/**
 * reverse_array - reverse the content of the array
 * @a: an array of integer
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)

{
int *star_c, *end_c, c;
int i;


start_c = a;
end_c = a;


for (i = 0; i < n; i++)
{
end_c++;
}



for (i = o; i < n / 2; i++)
{



c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}

}

