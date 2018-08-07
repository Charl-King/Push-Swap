
#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int		main(void)
{
	t_stack a;
	t_node node[10];
	int i = 0;

	a.data = node;
	a.size = 10;
	a.top = -1;
	while (i < a.size)
	{
		node[i].value = i;
		i++;
		a.top++;
		printf("i :%d  top1 :%d\n", i, a.top);
	}
	swap(&a);
	//printf("top2 = : %d\na.size %d\n", a.top, a.size);

	i = 0;
	while (i < a.size)
	{
		printf("%d\n", node[i].value);
		i++;
	}
}