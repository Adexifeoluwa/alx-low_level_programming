#include "lists.h"

/**
 * free_list -This  frees a list
 * @head: This is the head of the linked list.
 * Return: Provides no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
