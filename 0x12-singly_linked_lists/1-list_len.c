#include <stdlib.h>
#include "lists.h"

/**
 * list_len to list
 * This function returns the number of elements in a linked list_t list.
 *@h: size of memory
 *Declearation: for list_len
 * Return:()
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
