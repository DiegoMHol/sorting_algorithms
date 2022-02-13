#include "sort.h"

/**
 * swap - swap int of an array
 * @array: array to sort
 * @p1: pos of int to swap
 * @p2: pos of int to swap
 */
void swap(int *array, int p1, int p2)
{
	int tmp;

	tmp = array[p1];
	array[p1] = array[p2];
	array[p2] = tmp;
}
