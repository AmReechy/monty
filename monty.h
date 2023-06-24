#ifndef MONTY
#define MONTY

#define  _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


typedef struct var_s
{
	int queue;
	size_t stack_len;
} var_t;

typedef struct ric_s_stack
{
	int n;
	struct ric_s_stack *prev;
	struct ric_s_stack *next;
} ric_t_stack;

typedef struct ric_instruct
{
	char *opcode;
	void (*f)(ric_t_stack **stack, unsigned int line_number);
} ric_instruct_t;


typedef struct global_vars
{
	ric_t_stack **top;
	ric_instruct_t **ops;
} glob_vars;

extern glob_vars globv;


var_t var;

extern var_t var;

#define STACK 0
#define QUEUE 1

int _putchar(char c);
int mully(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
void stack_init(ric_t_stack **head);
void free_all(void);
void ricstack(ric_t_stack **stack, unsigned int line_number);
void ricqueue(ric_t_stack **stack, unsigned int line_number);
int file_reader(char *filename, ric_t_stack **stack);
int one(int x, int y);
void get_po(ric_t_stack **stack, char *op, unsigned int line_number);
void ricpush(ric_t_stack **stack, unsigned int line_number);
void ricpall(ric_t_stack **stack, unsigned int line_number);
int interpreter(char *num_string, unsigned int line_number);
void ricpint(ric_t_stack **stack, unsigned int line_number);
int two(int r1, int r2);
int _isupper(int c);
int _isdigit(int c);
void ricnop(ric_t_stack **stack, unsigned int line_number);
void ricsub(ric_t_stack **stack, unsigned int line_number);
int thr(int t, int u);
void ricpop(ric_t_stack **stack, unsigned int line_number);
void ricswap(ric_t_stack **stack, unsigned int line_number);
void ricadd(ric_t_stack **stack, unsigned int line_number);
void ricdiv(ric_t_stack **stack, unsigned int line_number);
void ricmul(ric_t_stack **stack, unsigned int line_number);
void ricmod(ric_t_stack **stack, unsigned int line_number);
void ricpchar(ric_t_stack **stack, unsigned int line_number);
void ricpstr(ric_t_stack **stack, unsigned int line_number);
void ricrotl(ric_t_stack **stack, unsigned int line_number);
int four(int m, int jk);
void ricrotr(ric_t_stack **stack, unsigned int line_number);

#endif /* MONTY */
