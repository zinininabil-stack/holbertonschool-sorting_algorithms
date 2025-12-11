#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the doubly linked list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current->prev;

			temp->next = current->next;
			current->prev = temp->prev;
			temp->prev = current;
			current->next = temp;

			if (current->prev != NULL)
				current->prev->next = current;
			if (temp->next != NULL)
				temp->next->prev = temp;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}

		if (current->prev == NULL || current->n >= current->prev->n)
			current = current->next;
	}
}
