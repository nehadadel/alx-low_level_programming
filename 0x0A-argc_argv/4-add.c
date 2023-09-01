#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, num, count;

count = 0;
if (argc < 2)
printf("0\n");

for (i = 1; i <= argc ;i++)
{
if (!(isdigit(*(argv + i))))
{
printf("Error\n");
return (1);
}
count = count + atoi(*(argv + i));
}
printf("%d\n",count);

return (0);
}
 
