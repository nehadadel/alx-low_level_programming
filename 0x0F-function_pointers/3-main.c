#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Prints multiplication of 2 arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (* result)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%' ) && (*argv[3] == '0'))
{
printf("Error\n");
exit(100);
}
result = get_op_func(argv[2]);
printf("%d\n", result(num1, num2)); 
return (0);
}
