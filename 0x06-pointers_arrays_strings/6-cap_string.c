#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
int index;
int referance;

referance = 0;

index = 0;
while (*(s + index) != '\0')
{
referance = 0;
if (*(s + index) == ' ' || *(s + index) == ',' || *(s + index) == '\t')
referance = 1;
if (*(s + index) == ':' || *(s + index) == ';' || *(s + index) == '"')
referance = 1;
if (*(s + index) == '{' || *(s + index) == '}' || *(s + index) == '\n')
referance = 1;
if (*(s + index) == '(' || *(s + index) == ')' || *(s + index) == '!')
referance = 1;
if (*(s + index) == '?')
referance = 1;
if (referance == 1 && *(s + index + 1) >= 97 && *(s + index + 1) <= 122)
{
*(s + index + 1) = (*(s + index + 1)) - 32;
}
if (index == 0 && *(s + index + 1) >= 97 && *(s + index + 1) <= 122)
*(s + index) = *(s + index) - 32;
index++;

}
return (s);
}

