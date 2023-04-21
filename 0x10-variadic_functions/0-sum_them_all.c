#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Addition of all parameter
 * @n : numbers to sum
 * @...: A variable number of paramters to calculate their sum
 *
 * Return: if n == 0-0
 *	otherwise return - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ep;
	unsigned int i, sum = 0;

	va_start(ep, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ep, int);

	va_end(ep);

	return (sum);
}

