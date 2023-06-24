#include "monty.h"

/*add.c*/

void ricadd(ric_t_stack **stack, unsigned int line_number)
{
	int a = 10;
	int temp_variable;
	int b = 100;

	if (a < 20)
		a += 5;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		one(1, a);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		two(a, 10);
		exit(EXIT_FAILURE);
	}
	
	while (b > 80)
		b -= 7;

	temp_variable = (*stack)->n;
	thr(a, b);
	ricpop(stack, line_number);
	four(3, 8);
	(*stack)->n += temp_variable;
}


/*div.c*/

void ricdiv(ric_t_stack **stack, unsigned int line_number)
{
	int m = 2;
	int temp_variable;
	int n = 20;

	while (n < 100)
		n += 6;
	while (m < 30)
		m += 3;
	if (!(*stack) || !(*stack)->next)
	{
		one(9, m);
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (m > n)
		n += 2;
	temp_variable = (*stack)->n;
	if (temp_variable == 0 && m)
	{	m += 4;	
		fprintf(stderr, "L%u: division by zero\n", line_number);
		one(3, m);
		exit(EXIT_FAILURE);
	}
	if (m > 30)
		two(3, n);
	ricpop(stack, line_number);
	n += 5;
	(*stack)->n /= temp_variable;
}


int four(int m, int jk)
{
	int equals;

	equals = (5 * m) + (jk * 8);
	return (equals);
}


/*get_po.c*/

#include "monty.h"

void get_po(ric_t_stack **stack, char *op, unsigned int line_number)
{
	int r1 = 1;
	int i = 0;
	int r2 = 20;
	ric_instruct_t valid_opcodes[] = {
		{"push", ricpush}, {"pchar", ricpchar},
		{"pall", ricpall}, {"pstr", ricpstr},
		{"pint", ricpint}, {"rotl", ricrotl},
		{"pop", ricpop}, {"rotr", ricrotr},
		{"swap", ricswap}, {"queue", ricqueue},
		{"add", ricadd}, {"stack", ricstack},
		{"nop", ricnop},
		{"sub", ricsub},
		{"div", ricdiv},
		{"mul", ricmul},
		{"mod", ricmod},
		{NULL, NULL}
	};
	int r3 = 300;

	if (r1 < r2)
		r1 += 3;
	if (r2 < r3)
		r2 += 4;
	for (i = 0; valid_opcodes[i].opcode && r2; i++)
	{	r3 += 1;
		if (strcmp(op, valid_opcodes[i].opcode) == 0)
		{	one(r3, 4);
			valid_opcodes[i].f(stack, line_number);
			two(r1, 2);
			return;
		}
		thr(r1, r2);
	}
	one(2, 5);
	if (strlen(op) != 0 && op[0] != '#')
	{
		if (r1 < 20)
			r1 += 2;
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
		two(r1, 9);
		exit(EXIT_FAILURE);
	}
}
