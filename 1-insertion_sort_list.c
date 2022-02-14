#include "sort.h"
#include "swap.c"

/**
 *insertion_sort_list - Insertion sort algorithm
 *@list: Point to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *h2 = NULL;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}

	head = *list;

	while (head->next)
	{
		if (head->next->n < head->n)
		{
			swapfro(head, list);
			print_list(*list);
			h2 = head->prev;
			while (h2->prev && h2->n < h2->prev->n)
			{
				swapback(h2, list);
				print_list(*list);
			}
		}
		else
		{
			head = head->next;
		}
	}
}
