#include "lists.h"
/**
* list_len - this is the shows the number of node of a list_t list.
* @h: this is the pointer to the list address
* Return:this is the  number of nodes
*/
size_t list_len(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
