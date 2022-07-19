#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 * Return: no return
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int a;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
