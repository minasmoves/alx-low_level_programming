char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);

/**
* _strcat - function that concatenates
*          two strings.
*
* @dest: pointer to destnation input
* @src: pointer to source input
*
* Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
/*find the size of dest array*/
while (dest[c])
c++;
/* iterate through each src array value without the null byte*/
for (c2 = 0; src[c2] ; c2++)
/*append src[c2] to dest[c] while overwritting the null byte in dest*/
dest[c++] = src[c2];
return (dest);
}
