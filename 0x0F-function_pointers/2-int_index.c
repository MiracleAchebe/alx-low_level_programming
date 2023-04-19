#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return the index of the first element
 * @size : the number of element in array
 * @array : array
 * @cmp : a pointer to the function to be used to compare values
 * Return: the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
