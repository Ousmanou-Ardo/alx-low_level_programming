#include "lists.h"
/**
  * sum_listint - summing theelements of a list
  * @head: pointer to the head of the list
  * Return: elements' sum
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
