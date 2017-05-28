#include "monty.h"

/**
 *
 *
 *
 *
 **/

int main(stack_t **p, char *opline, unsigned int line)
{
	stack_t *node;
	char *head;

	head = num_lines(opline);

	if (head == NULL)
	{
		printf("L%d: usage: push integer\n", __LINE__);
		

	}
}
