#include "hash_tables.h"
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to a lined list
 * @key: key of array in hash-table
 * @value: value
 *
 * Return: pointer to the new node
 */
hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = head;

	head = new;
	return (head);
}

/**
 * hash_table_set - adds a node to the beginning of a linked list
 * @ht: pointer to a lined list
 * @key: key of array in hash-table
 * @value: value
 *
 * Return: pointer to the new node
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];
	new = add_node(ht->array[idx], key, value);
	if (new == NULL)
		return (0);
	ht->array[idx] = new;

	return (1);
}
