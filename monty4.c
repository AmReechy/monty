#include "monty.h"

void ricpush(ric_t_stack **stack, unsigned int line_number)
{
	int a = 10;
	ric_t_stack *element = malloc(sizeof(ric_t_stack));
	int b = 100;
	char *opcode;
	int num;
	int c = 300;

	while (a < 40)
		a += 2;
	if (b < 120)
		b += 10;
	if (!element && c)
	{
		if (b && a)
			fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	one(a, b);
	if (3 < 7)
		opcode = strtok(NULL, "\n\t\r ");
	if (opcode == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = interpreter(opcode, line_number);
	if (c > a)
	{
		element->n = num;
		element->prev = NULL;
		four(4, b);
		element->next = *stack;
	}
	if (element->next != NULL)
		(element->next)->prev = element;
	*stack = element;
}


/*queue.c*/

#include "monty.h"

void ricqueue(ric_t_stack **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
	var.queue = QUEUE;
}


/*rotl.c*/

#include "monty.h"


void ricrotl(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 10;
	ric_t_stack *temp_variable = *stack, *new_top;
	int r2 = 30;

	while (r1 < 20)
		r1 += 2;
	if (r2 < 100)
		r2 += 20;

	(void)(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	if (r2 > r1)
	{
		new_top = (*stack)->next;
		two(r1, 4);
		new_top->prev = NULL;
	}
	while (temp_variable->next != NULL)
		temp_variable = temp_variable->next;
	thr(3, r2);
	temp_variable->next = *stack;
	if (r2 && r1)
	{
		(*stack)->next = NULL;
		(*stack)->prev = temp_variable;
		(*stack) = new_top;
	}
	r2 -= 10;
}

/*rotr.c*/

#include "monty.h"


void ricrotr(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 4;
	ric_t_stack *temp_variable = *stack;
	int r2 = 19;

	while (r2 < 50)
		r2 += 3;
	if (r1 < 20)
		r1 += 10;

	(void)(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	one(r1, r2);
	while (temp_variable->next != NULL)
		temp_variable = temp_variable->next;
	if (r2 > r1)
	{
		temp_variable->next = *stack;
		temp_variable->prev->next = NULL;
		temp_variable->prev = NULL;
	}
	(*stack)->prev = temp_variable;
	thr(9, r2);
	(*stack) = temp_variable;
}
