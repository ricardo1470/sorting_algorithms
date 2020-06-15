#include "sort.h"

/**
 * bubble_sort - function to order whyt the method bubble
 *@array: value
 *@size: value
 * print_function - function to be printed
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i ; j++)
		{
			if (array[j - 1] > array[j])
			{
				k = array[j - 1];
				array[j - 1] = array[j];
				array[j] = k;
				print_array(array, size);
			}
		}

	}
}
