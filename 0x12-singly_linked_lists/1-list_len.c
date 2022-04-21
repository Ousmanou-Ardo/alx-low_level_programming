#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - finding  nodes number in a list
  * @h: singly linked list
  * Return: elements number in a linked list
  */
size_t list_len(const list_t *h)
{
	int p;

	for (p = 0; h; p++)
		h = h->next;
	return (p);
}
