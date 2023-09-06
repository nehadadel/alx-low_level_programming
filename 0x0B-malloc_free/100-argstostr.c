#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all the arguments of your program.
 *
 *@ac: integer number
 *@av: pointer to pointer char
 *
 *Return: char to pointer
*/
char *argstostr(int ac, char **av)
{
int i, k, len, j;
char *arr;

if (ac == 0 || av == NULL)
return(NULL);

len = 0;
k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++
len++;
}
len++;
}

arr = (char *)malloc(len + ac  * sizeof(char));
if (arr = NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] = '\0'; j++)
{
arr[k] = av[i][j];
k++;
}
arr[k] = '\n';
k++;
}
 return (arr);
}
