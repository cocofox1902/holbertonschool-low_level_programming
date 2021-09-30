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
long int longIntType;
long long int longLongIntType;
float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %zu bytes(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(longLongIntType));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));

	return (0);
}
