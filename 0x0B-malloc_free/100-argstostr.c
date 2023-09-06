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
int i, len, j;
char **arr;

if (ac == 0 || av == NULL)
return(NULL);

arr = (char **)malloc(ac * sizeof(char *));
if (arr == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = 0;
while (*av[i] != '\0')
len++;
arr[i] = (char *)malloc(len + 1 * sizeof(char));
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
return (NULL);
}
 
}
for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		  arr[i][j] = av[i][j];
		}
		arr[i][j] = '\n';	       
}


return(*arr);
}
