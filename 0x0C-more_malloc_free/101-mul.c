#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two positive numbers.
 *
 *@argc: integer number
 *@argv: pointr to arry
 *
 *Return: 0 if success
*/
int main(int argc, char *argv[])
{
int i, j, num1, num2, result;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
if (!isdigit(argv[i][j]))
{
printf("Error\n");
exit(98);
}
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = (num1) *(num2);
printf("%d\n", result);
return (0);
}
