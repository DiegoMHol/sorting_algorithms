#include "sort.h"
#include "swap.c"

/**
 *selection_sort - Selections sort algorithm
 *@array: array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int min = 0, i = 0, j = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(array, min, i);
		if (min != i)
			print_array(array, size);
	}
}
