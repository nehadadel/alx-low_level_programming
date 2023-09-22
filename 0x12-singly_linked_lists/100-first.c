#include<stdio.h>
void before_main() _attribute_((constructor));
void before_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
}
