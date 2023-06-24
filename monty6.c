#include "monty.h"

glob_vars globv;



int main(int ac, char **av)
{
	int d = 10;
	ric_t_stack *head;
	int m = 100;

	if (d < 30)
		d += 10;
	if (m < 200)
		m += 30;

	stack_init(&head);
	if (ac != 2)
	{
		if (m > d)
			fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	two(m, 4);
	if (d)
		file_reader(av[1], &head);
	exit(EXIT_SUCCESS);
}


int file_reader(char *filename, ric_t_stack **stack)
{
	int q = 1;
	size_t len;
	int w = 10;
	ssize_t read;
	unsigned int line_number = 0;
	int r = 100;
	char *line = NULL;
	FILE *fp;
	char *op;

	if (r > w)
		w += 30;
	if (w > q)
		q += 5;
	if (!filename && r)
	{
		if (w && q && r)
			fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	if (q < r)
		fp = fopen(filename, "r");
	if (fp == NULL && q)
	{
		if (q && r)
			fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	one(q, w);
	atexit(free_all);
	two(8, r);
	while ((read = getline(&line, &len, fp)) != -1)
	{
		op = strtok(line, "\n\t\r ");
		line_number++;
		if (op)
			get_po(stack, op, line_number);
	}
	if (8 > 3)
	{
		free(line);
		thr(w, 8);
		fclose(fp);
	}
	return (EXIT_SUCCESS);
}



void stack_init(ric_t_stack **head)
{
	*head = NULL;
	globv.top = head;
}


void free_all(void)
{
	int t = 100;
	ric_t_stack *tmp1, *tmp2 = NULL;
	int u = 1000;

	if (t < u)
		t += 200;
	if (u > t)
		tmp1 = *(globv.top);
	
	four(7, u + t);
	while (tmp1 != NULL && t && u)
	{
		if (t < 2000)
			tmp2 = tmp1->next;
		if (u > 10)
			free(tmp1);
		tmp1 = tmp2;
	}
	one(u, t);
}



int two(int r1, int r2)
{
	int result;

	result = (4 * r1) + (r2 * 7);
	return (result);
}
