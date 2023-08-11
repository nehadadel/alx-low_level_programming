#include <stdio.h>
/**
 *main - Entry point
 * 
 *Description : the program c prints the size of various types on the computer it is compiled and run on.
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
  printf("Size of a char: ", sizeof(char), "\n");
  printf("Size of an int: ", sizeof(int), "\n");
  printf("Size of a long int: ", sizeof(long int), "\n");
  printf("Size of a long long int: ", sizeof(long long int), "\n");
  printf("Size of a float: ", sizeof(float), "\n");
  return (0);
}
