#include "monty.h"

/**
 * for stacks you need a top pointer, to point to the top
 *
 */

int main(void)
{
	stack_t *top = NULL;
	
	add_stack(&top, 8);
	add_stack(&top, 10);
	temp = top;
	
	while(temp != NULL)
	{
		
	}
	
	printf("%i\n, top->element")
	
}

stack_t **add_stack(stack_t **top, int element)
{
	stack_t *temp = *top;
	stack_t *node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = element;
	node->next = NULL;
	node->prev = NULL;
	
	/* if stack is empty, temp is a pointer to top (head pointer)*/
	if (temp == NULL)
	{
		/* if the stack is empty, let top point to the new node */
		*top = node;
	}
	else
	{
		node->next = temp;
		temp->previous = node;
		*top = node;
	}
	return (top);
}
