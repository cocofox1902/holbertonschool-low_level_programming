#include <stdio.h>

/**
 * main - Main
 *
 * Return: 0
 */

int main(void)
{
char charType;
int intType;
float floatType;
long int longIntType;
long long int longLongIntType;

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu bytes(s)\n", sizeof(intType));
printf("Size of float: %zu bytes(s)\n", sizeof(floatType));
printf("Size of long int: %zu bytes(s)\n", sizeof(longIntType));
printf("Size of long long int: %zu bytes(s)\n", sizeof(longLongIntType));

	return (0);
}
