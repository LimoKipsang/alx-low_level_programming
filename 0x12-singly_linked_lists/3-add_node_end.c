#include "lists.h"

/***
 * add_node_end - adds node to the end of the list.
 * @head: head of teh node.
 * @str: string
 * Retrun: address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newmode, *temp;
	unsigned int y, count = 0;

	newmode = malloc(sizeof(list_t));
	if (newmode == NULL)
		return (NULL);
	newmode->str = strdup(str);
	for (y = 0; str[y] != '\0'; y++)
		count++;
	newmode->len = count;
	newmode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = newmode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newmode;
	}
	return (*head);
}
