#include "monty.h"

int interpreter(char *num_string, unsigned int line_number)
{
	int r1 = 10;
	int base = 10;
	int r2 = 20;
	char *endptr;
	int r3 = 30;
	long val;


	errno = 0; 
	val = strtol(num_string, &endptr, base);


	while (r3 < 100)
		r3 += 2;
	while (r2 < 50)
		r2 += 1;
	if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN))
									|| (errno != 0 && val == 0))
	{	r3 += 1;
		one(r3, r2);
		exit(EXIT_FAILURE);
	}
	r2 += 3;
	if (r3 && endptr == num_string)
	{
		two(1, r1);
		/* No digits were found */
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	two(r3, 7);

	if (num_string[0] != '\0')
		if (!isdigit(num_string[0]) && *endptr != '\0')
		{
			four(4, 8);
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	thr(3, 6);
	return (val);
}

/*mod.c*/

#include "monty.h"

void ricmod(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 10;
	int temp_variable;
	int r2 = 200;

	while (r1 < 50)
		r1 += 2;
	while (r2 < 300)
		r2 += 3;
	if (!(*stack) || !(*stack)->next)
	{
		r2 += 5;
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		two(8, r1);
		exit(EXIT_FAILURE);
	}
	if (r1 > 1)
		temp_variable = (*stack)->n;
	if (5)
		ricpop(stack, line_number);
	if (temp_variable == 0 && r2)
	{
		thr(r2, r1);
		fprintf(stderr, "L%u: division by zero\n", line_number);
		r2 += 3;
		exit(EXIT_FAILURE);
	}
	if (4 > 1)
		(*stack)->n %= temp_variable;
}


/*mul.c*/

#include "monty.h"

void ricmul(ric_t_stack **stack, unsigned int line_number)
{
	int r1 = 5;
	int temp_variable;
	int r2 = 10;

	while (r1 < 20)
		r1 += 3;
	while (r2 < 200)
		r2 += 4;
	if (!(*stack) || !(*stack)->next)
	{
		one(r1, r2);
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (r2 > r1)
		temp_variable = (*stack)->n;
	if (r2)
		ricpop(stack, line_number);
	(*stack)->n *= temp_variable;
}


int one(int x, int y)
{
	int equals;

	equals = (2 * x) + (y * 3);
	return (equals);
}
