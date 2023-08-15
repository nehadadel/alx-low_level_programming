#include <ctype.h>
#include "main.h"

/**
 *_islower - that checks for lowercase character.
 *
 * @c: int type
 *
 *Return: (1) if it is lowercase
 *(0) otherwise
*/

int _islower(int c)
{
if ((c >= 'a')&&(c <= 'z'))
{
return (1);
}
return (0);
}
