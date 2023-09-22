#include <stdio.h>

void __attribute__((constructor)) before_before(void);

/**
 * before_before - Prints a string before the
 *   main function is executed.
 */
void before_before(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
