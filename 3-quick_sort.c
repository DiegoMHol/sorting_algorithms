#include "sort.h"
#include "swap.c"

/**
 *quick_sort - Quick sort algorithm
 *@array: array
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0, hi = (size - 1);

	_lomuto(array, lo, hi, size);
}

/**
 *_lomuto - Lomuto sort alg
 *@array: array
 *@size: size of array
 *@lo: lower val
 *@hi: higher valu
 */
void _lomuto(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = lo_partition(array, lo, hi, size);
		_lomuto(array, lo, p - 1, size);
		_lomuto(array, p + 1, hi, size);
	}
}

/**
 *lo_partition - Lomuto sorting partition
 *@array: array
 *@size: size of array
 *@lo: lower val
 *@hi: higher val
 *Return: 0
 */
int lo_partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = lo,  j = lo;

	for (; j <= hi; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, j, i);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	swap(array, i, hi);
	if (array[hi] != pivot)
		print_array(array, size);
	return (i);
}
