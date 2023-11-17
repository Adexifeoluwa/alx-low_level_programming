#include "lists.h"
/**
 * custom_print_list - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

size_t custom_print_list(const list_t *head)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		nelem++;
	}
	return (nelem);
}
