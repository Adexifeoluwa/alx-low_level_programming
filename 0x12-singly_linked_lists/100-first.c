#include <stdio.h>

/**
 * bmain - This is the function executed before main
 * Return: provides no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
