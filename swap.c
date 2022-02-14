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

/**
 *swapfro - swap nodes with the next
 *@head: point to header list
 *@list: pointer to pointer of list
 */
void swapfro(listint_t *head, listint_t **list)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

	tmp = head;
	tmp2 = head->next;

	if (tmp->prev)
		tmp->prev->next = tmp2;
	if (tmp2->next)
	{
		tmp2->next->prev = tmp;
		tmp->next = tmp2->next;
	}
	if (!tmp2->next)
		tmp->next = NULL;
	if (tmp->prev)
		tmp2->prev = tmp->prev;
	if (!tmp->prev)
	{
		*list = tmp2;
		tmp2->prev = NULL;
	}
	tmp->prev = tmp2;
	tmp2->next = tmp;
}

/**
 *swapback - Swap nodes with next
 *@head: pointer to head
 *@list: pointer to pointer of list
 */
void swapback(listint_t *head, listint_t **list)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

	tmp2 = head->prev;
	tmp = head;
	if (tmp2->prev)
		tmp2->prev->next = tmp;
	tmp->next->prev = tmp2;
	tmp2->next = tmp->next;
	tmp->prev = tmp2->prev;
	tmp2->prev = tmp;
	tmp->next = tmp2;
	if (!tmp->prev)
		*list = tmp;
}
