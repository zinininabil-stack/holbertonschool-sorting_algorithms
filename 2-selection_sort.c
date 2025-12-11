#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Return: Nothing
 *
 * Description:
 *   Implements the selection sort algorithm. Repeatedly finds the minimum
 *   element in the unsorted portion of the array and swaps it with the first
 *   unsorted element. Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	size_t first, current;
	int temp_n, temp_loc;

	for (first = 0; first < size; first++)
	{
		temp_n = array[first];
		for (current = first; current < size; current++)
		{
			if (array[current] < temp_n)
			{
				temp_n = array[current];
				temp_loc = current;
			}
		}
		if (temp_n != array[first])
		{
			array[temp_loc] = array[first];
			array[first] = temp_n;
			print_array(array, size);
		}
	}
}
