#include "3-calc.h"
/**
 * get_op_func - structure with operators and functions
 * @s:pointer to function
 * File: 3-calc.h
 * Auth: Jhojan Perlaza
 * Desc: Header file containing declarations for all functions
 * used in the 0x0F.
 * Return: returns the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
