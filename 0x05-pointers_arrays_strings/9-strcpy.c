/**
 * _strcpy - copies the string pointed to by src
 * @dest: a pointer to char that will be changed
 * @src: a pointer to char that will be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

int i;

i = o;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
