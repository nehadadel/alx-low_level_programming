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
int i, sum;
char *letter;

sum = 0;

if (argc < 2)
printf("0\n");

for (i = 1; i < argc; i++)
{
letter = argv[i];
if (*letter < 47 || *letter > 57)
{
printf("Erorr\n");
return (1);
}
sum = sum + atoi(*(argv + i));
}
printf("%d\n", sum);
return (0);
}
