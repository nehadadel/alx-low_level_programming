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
int coins;

if (argc < 2)
{
printf("Error\n");
return (1);
}
coins = atoi(*(argv + 1));
if (coins < 0)
printf("0\n");

return (0);

}
