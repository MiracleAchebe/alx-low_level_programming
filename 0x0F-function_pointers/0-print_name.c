#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints my name
 * @name : name of someone
 * @f : pointer of char
 *
 * Return : nothing
 */
void print_name(char *name, void (*f)(char *))
{
       	f(name);

	return;
}
