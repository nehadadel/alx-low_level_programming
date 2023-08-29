#include "main.h"
/**
 *print_chessboard - print cheessboard
 *
 *@a: array of char
*/
void print_chessboard(char (*a)[8])
{
int i, j;

i = 0;
j = 0;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
}
}
