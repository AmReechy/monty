#include "monty.h"

void ricstack(ric_t_stack **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
	var.queue = QUEUE;
}


/*sub.c*/

#include "monty.h"

void ricsub(ric_t_stack **stack, unsigned int line_number)
{
	int ric1 = 12;
	int temp_variable;
	int ric2 = 34;

	if (ric1 < 20)
		ric1 += 5;
	if (ric2 < 50)
		ric2 += 9;

	if (!(*stack) || !(*stack)->next)
	{
		if (ric1)
			fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	two(ric1, ric2);
	if (ric2)
		temp_variable = (*stack)->n;
	ricpop(stack, line_number);
	four(ric2, 3);
	(*stack)->n -= temp_variable;
}

int thr(int t, int u)
{
	int equals;

	equals = (3 * u) + (t * 6);
	return (equals);
}



/*swap.c*/

#include "monty.h"


void ricswap(ric_t_stack **stack, unsigned int line_number)
{
	int r = 2;
	ric_t_stack *temp_variable;
	int y = 20;

	while (r < 10)
		r += 3;
	while (y < 40)
		y += 2;

	(void)(line_number);
	if (!(*stack) || !((*stack)->next))
	{
		if (y > r)
			fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (y && r)
	{
		temp_variable = (*stack)->next;
		y += 4;
		(*stack)->prev = (*stack)->next;
		one(5, r);
		(*stack)->next = temp_variable->next;
		temp_variable->prev = NULL;
		thr(7, y);
		(*stack)->prev = temp_variable;
	}
	if (temp_variable->next)
		temp_variable->next->prev = *stack;
	r += 3;
	if (y)
		temp_variable->next = *stack;
	(*stack) = (*stack)->prev;
}
