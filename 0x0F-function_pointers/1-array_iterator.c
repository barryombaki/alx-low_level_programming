#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array to execute upon
 * @size: size of the array
 * @action: function pointer to execute upon the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 0 && size != 0 && action != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
