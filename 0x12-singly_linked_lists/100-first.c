#include <stdio.h>

void __attribute__((constructor)) the_Hare_And_The_Tortoise(void);

/**
 * the_Hare_And_The_Tortoise - Print string before main
 */
void the_Hare_And_The_Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
