#include "main.h"
/**
 * _strncat - concatenates two stringes
 * @dest: a pointer to character
 * @src: a pointer to character it will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;


while (dest[c])
c++;

/**
 * src doesnot need to be null terminated
 * if it is comtains n or more bytes
 */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];

dest[c + i] = '\0';

return (dest);
}
