#include "lists.h"

/**
 * print_listint - This prints all the elements of a linked list
 * @h: The is the linked list of type listint_t to print
 * Return: this returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}

