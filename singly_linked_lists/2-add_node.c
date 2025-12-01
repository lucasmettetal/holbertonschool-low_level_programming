#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: address of the pointer to the first node
 * @str: string to duplicate and store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int length = 0;

	if (!head || !str)
		return (NULL);

	while (str[length])
		length++;

	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
