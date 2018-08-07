
#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int		main(void)
{
	t_stack a;
	t_node node[10];
	int i = 0;

	a.size = 10;
	a.top = -1;
	while (++a.top < a.size)
	{
		printf("%d ", a.top);
		node[a.top].value = a.top;
		printf("%d ", node[a.top].value);
	}
	setdata(&a,*&node);
	printf("\n");
	swap(&a);
	print_stack(&a);
}