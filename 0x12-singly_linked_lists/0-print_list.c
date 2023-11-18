#include "lists.h"
/**
 * print_list - This prints all the elements of a list_t list.
 * @h: The singly linked list.
 * Return: return the number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%zu] %s\n", 0, "(nil)");
		else
			printf("[%zu] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
