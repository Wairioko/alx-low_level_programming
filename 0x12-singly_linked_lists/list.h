#ifndef _LISTS_
#define _LISTS_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*struct list_g - singl linked list
*@len: the legth of a string
*@str: string - (malloc'ed string)
*@next: points to the next node
*
*/
typedef struct list_g
{
char *str;
unsigned int len;
struct list_g *next;
} list_t;
size_t print_list(const list_t *g);
size_t list_len(const list_t *g);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
