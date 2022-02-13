#include "sort.h"
#include "swap.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - Bubble sort algorithm
 * @array: array of int
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < ((size - i) - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j +1);
				print_array(array, size);
			}
		}
	}
}
