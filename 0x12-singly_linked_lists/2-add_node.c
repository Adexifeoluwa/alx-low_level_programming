#include "lists.h"
/**
 * add_node - This adds a new node at the beginning
 * of a list_t list.
 * @head: The head of the linked list.
 * @str: The string to store in the list.
 * Return: The address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
