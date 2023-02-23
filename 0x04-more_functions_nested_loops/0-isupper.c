#include "main.h"
/**
 * _isupper-check if character is lowercase or uppercase
 * @c:character to check if it islowercase.
 * Return:1-if lowercase/uppercase,0-if not.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
