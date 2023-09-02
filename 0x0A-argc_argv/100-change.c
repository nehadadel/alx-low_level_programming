#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins
 *to make change for an amount of money.
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
int coins, cents;

 coins = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
cents = atoi(*(argv + 1));
if (cents < 0)
printf("0\n");
else
{
while (cents >= 25)
{
cents = cents - 25;
coins++;
}
while (cents >= 10)
{
cents = cents - 10;
coins++;
}
while (cents >= 5)
{
cents = cents - 5;
coins++;
}
while (cents >= 2)
{
cents = cents - 2;
coins++;
}
if (cents == 1)
coins++;
printf("%d\n",coins);
}

return (0);

}
