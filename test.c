
#include "list.h"
#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list	l1;
	t_list	l2;
	t_list	*tmp;
	int		i;

	l1.data = 5;
	l1.next = &l2;
	l1.next->data = 5;
	tmp = &l1;
	i = 0;

	while (tmp->next && i < 10)
	{
		tmp = tmp->next;
		tmp->data = i;
	}

	l1 = *tmp;

	while (l1.next)
	{
		printf("%d\n", l1.data);
		tmp = tmp->next;
	}
	printf("%d\n", l1.next->data);
}
