#include "lists.h"
/**
*print_list - prints out elements of list_t
*@g: singly linked list
*Return: returns no.of elements in list_t
*/
size_t print_list(const list_t *g)
{
size_t nelem;
nelem = 0;
while (g != NULL)
{
if (g-> == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", g->len, g->str);
g = g->next;
nelem++;
}
return (nelem);
}
