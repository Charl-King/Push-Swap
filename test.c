
#include "list.h"
#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list l1;
	t_list l2;
	t_list *tmp;

	l1.data = 5;
	l1.next = &l2;
	l1.next->data = 5;
	tmp = l1.next;

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	printf("%d\n", l1.next->data);
}
