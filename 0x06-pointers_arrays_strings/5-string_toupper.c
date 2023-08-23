#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
  int index;

  index = 0;
  while (*s != '\0')
    {
      if (*s >= 97 && *s <= 122)
	{
	  *s = *s - 32;
	}
      s++;
      index++;
    }
  return (s - index);
}
