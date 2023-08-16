#include "main.h"
/**
 *jack_bauer - prints time table in this format: HH:MM
 *
 *Return: nothing
*/
void jack_bauer(void)
{
int hr;

int mintus;

for (hr = 0; hr <= 23; hr++)
{
for (mintus = 0 ; mintus <= 59 ; mintus++)
{
_putchar('0' + (hr / 10));
_putchar('0' + (hr % 10));
_putchar(':');
_putchar('0' + (mintus / 10));
_putchar('0' + (mintus % 10));
_putchar('\n');
}
}
}
