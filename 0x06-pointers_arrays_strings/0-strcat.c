#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: a pointer to a character 
 * @src: a pointer to a character that be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[i] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
