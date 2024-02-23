#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-" , op_sub},
        {"*" , op_mul},
        {"/" , op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;
	
	while (i < 10)
	{
		if (s[0] == ops[i].op[0])
		{
			return ops[i].f;
		}
		i++;
	}
	return (NULL);
}