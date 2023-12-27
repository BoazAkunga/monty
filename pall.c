#include "monty.h"
/**
 * f_pall - prints my stack
 * @head: my stack head
 * @counter: not used
 * Return: No return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
