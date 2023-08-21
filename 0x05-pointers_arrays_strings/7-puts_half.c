#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 *Return: Nothing
*/
void puts_half(char *str)
{
int index, i;

index = 0;
while (str[index] != '\0')
{
index++;
}
if (index % 2 != 0)
{
for (i = (index - 1) / 2; i < index; i++)
{
_putchar(str[i + 1]);
}
}
else
{
for (i = index / 2; i < index; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
