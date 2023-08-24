#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
int index_s, index_arr;
char arr_letters[] = "aAeEoOtTlL";
char arr_numbers[] = "4433007711";

for (index_s = 0; *(s + index_s) != '\0'; index_s++)
{
for (index_arr = 0; index_arr < 10; index_arr++)
{
if (*(s + index_s) == *(arr_letters + index_arr))
{
*(s + index_s) = *(arr_numbers + index_arr);
}
}
}
return (s);

}
