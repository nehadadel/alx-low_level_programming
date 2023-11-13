#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 *_putchar - writes the character c to stdout
 *
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
return (write(1, &c, 1));
}

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
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
return (0);
}

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
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
return (0);
}

/**
 *_abs - that return absolute value.
 *
 *@i: the integer to be converted
 *
 *Return: absolute value of i
 */
int _abs(int i)
{
if (i < 0)
{
i = i * -1;
}
return (i);
}
