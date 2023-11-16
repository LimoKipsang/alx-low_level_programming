#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add node at the beginning.
 * @head: head of node.
 * @str: string to store.
 * Return: address of new element or NULL  if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newmode;
	unsigned int i, count = 0;

	newmode = malloc(sizeof(list_t));
	if (newmode == NULL)
		return (NULL);
	newmode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newmode->len = count;
	newmode->next = *head;
	*head = newmode;

	return (*head);
}
