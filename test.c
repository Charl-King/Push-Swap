
#include "list.h"
#include <unistd.h>
#include <stdio.h>
#include "push-swap.h"

int		main(int argc, char **argv)
{
	t_list *list;
	t_list *l1;
	int i;

	l1 = list;
	i = 0;
	while (i < 10)
	{
		l1->data = i;
		l1 = l1->next;
		i++;
	}
}