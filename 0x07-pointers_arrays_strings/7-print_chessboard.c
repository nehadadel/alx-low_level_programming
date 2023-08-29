#include "main.h"
/***/
void print_chessboard(char (*a)[8])
{
int i, j;

i = 0;
j = 0;


while (*(a + i) != '\0')
{
for (j = 0; j < 8 ; j++)
{
_putchar((*(a + i))[j]);
}
i++;
}
  
}
