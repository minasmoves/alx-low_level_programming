#include "main.h"

/**
 * _isalpha - checks if it is alphabetic.
 * @c: character to be checked 
 * return 1 if char is letter lowe or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
