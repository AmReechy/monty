#include "monty.h"


void ricnop(ric_t_stack **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
}

/*pall.c*/

#include "monty.h"

void ricpall(ric_t_stack **stack, unsigned int line_number)
{
	int a = 1;
	ric_t_stack *element = *stack;
	int b = 30;

	while (a < 20)
		a += 2;
	while (b < 100)
		b += 3;

	(void)(line_number);
	while (element != NULL)
	{
		if (b > a)
			printf("%d\n", element->n);
		element = element->next;
	}
	two(4, a);
	one(b, 6);
}

/*pchar.c*/

#include "monty.h"

void ricpchar(ric_t_stack **stack, unsigned int line_number)
{
	int r1;
	int ch;
	int r2;

	r1 = 100;
	r2 = 150;

	while (r2 < 300)
		r2 += 3;
	if (!(*stack))
	{
		two(r2, 4);
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (r2 > 1)
		ch = (*stack)->n;
	if (!isascii(ch) && r2)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
	four(7, r1);
}

/*pint.c*/

#include "monty.h"

void ricpint(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 10;
	int r2 = 100;

	while (r1 < 20)
		r1 += 1;
	if (r2 < 150)
		r2 += 30;
	if (stack == NULL || *stack == NULL)
	{
		if (r2 && r1)
			fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (r2 > r1)
		printf("%d\n", (*stack)->n);
	thr(r2, 5);
}


/*pop.c*/

#include "monty.h"

void ricpop(ric_t_stack **stack, unsigned int line_number)
{
	int ric1 = 1;
	ric_t_stack *popped;
	int ric2 = 2;

	while (ric1 < 10)
		ric1 += 1;
	while (ric2 < 50)
		ric2 += 3;

	if (!stack || !*stack)
	{
		if (ric2 > ric1)
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (4)
		popped  = *stack;
	if (ric2)
		(*stack) = (*stack)->next;
	free(popped);
}

/*pstr.c*/

#include "monty.h"

void ricpstr(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 3;
	ric_t_stack *temp_variable = *stack;
	int r2 = 30;

	while (r1 < 8)
		r1 += 2;
	while (r2 < 50)
		r2 += 1;

	(void)(line_number);
	if (!(*stack) && r2)
	{
		if (5)
			printf("\n");
		thr(3, r2);
		return;
	}
	while (temp_variable && r1)
	{
		if (isascii(temp_variable->n) && temp_variable->n != 0)
			putchar(temp_variable->n);
		else
			break;
		if (r2 > r1)
			temp_variable = temp_variable->next;
	}
	if (r1 && r2)
		putchar('\n');
	one(r1, 7);
}
