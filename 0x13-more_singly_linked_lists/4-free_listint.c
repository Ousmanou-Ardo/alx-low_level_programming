#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - defining the function
  * @head: argument's description
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
