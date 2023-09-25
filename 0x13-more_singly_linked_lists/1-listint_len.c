#include "lists.h"
/**
* listint_len -these  shows the number of node of a listint_t list.
* @h: this is a  pointer to the header address
* Return: this defined the number of nodes
*/
size_t listint_len(const listint_t *h)
{
unsigned long int i;
const listint_t *temp = h;
i = 0;
while (temp != NULL)
{
temp = temp->next;
i++;
}
return (i);
}
