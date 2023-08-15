#include <ctype.h>
#include "main.h"

/**
 *_isalpha - that checks for alphabetic character.
 *
 *@c: int type
 *
 *Return: (1) if it is alphabetic
 *(0) otherwise
*/

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
