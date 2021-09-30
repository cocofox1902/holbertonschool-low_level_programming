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

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longIntType));
printf("Size of long long int: %zu bytes\n", sizeof(longLongIntType));

	return (0);
}
