#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list - list
 * @str: str
 * @len: unsigned int
 * @next: struct
 */

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
