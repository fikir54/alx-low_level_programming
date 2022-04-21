#include <stdio.h>

void b(void) __attribute__ ((constructor));

/**
  * b - prints from init by the loader before main.(prints before main)
  */

void b(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
