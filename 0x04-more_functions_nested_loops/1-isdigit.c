#include "main.h"
/**
 * _isdigit-check if c is a digit.
 * @c:digit to check if is a digit.
 * Return:1-if digit,0-if not.
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}