#include "sort.h"

/**
 * swap - Swap integers in an array.
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 */
void swap(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/**
 * bubble_sort - Sort of integer's array in ascending order.
 * @array: Array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped == true
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swap == false;
			}
		}
		len--
	}

}
