#include "sort.h"


/**
 * insertion_sort_list - This function sorts a doubly
 * linked list
 * @list: The list to be sorted
 *
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (current)
	{
		tmp = current->prev;

		while (tmp && tmp->n > current->n)
		{

			if (current->next != NULL)
				current->next->prev = tmp;
			/* swap the nodes */
			tmp->next = current->next;
			current->prev = tmp->prev;
			current->next = tmp;
			tmp->prev = current;

			if (current->prev != NULL)
				current->prev->next = current;

			else
				*list = current;

			print_list(*list);
			/* update temp for the next iteration*/
			tmp = current->prev;
		}
		/* Move to the next */
		current = current->next;
	}
}
