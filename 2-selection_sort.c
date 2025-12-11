#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the doubly linked list
 *
 * Return: Nothing
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
