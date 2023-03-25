#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function on success
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

	if (s == NULL)
		return (NULL);

	while (ops[i].op == s)
	{
		return (*ops[i].p);
		i++;
	}
}
