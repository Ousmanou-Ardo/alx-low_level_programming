#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - takes length of the string
  * @s: string
  * Return: return the length of the string
  */
int _strlen(const char *s)
{
	int p;

	for (p = 0; s[p]; p++)
		;
	return (p);
}
/**
  * add_node - adding new nodes to the list
  * @head: actual place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	int k, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		content[k] = str[k];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
