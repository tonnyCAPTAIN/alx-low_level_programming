#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
