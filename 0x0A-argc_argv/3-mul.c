#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Prints multiplication of 2 arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc >= 4)
printf("Error\n");
else
{
num1 = atoi(*(argv + 1));
num2 = atoi(*(argv + 2));
result = num1 * num2;
printf("%d\n", result);
}
return (0);
}
