#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: str
 * @f: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
}
