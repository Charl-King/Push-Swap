/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 16:50:38 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	set_args(t_a *a, int x, char **args)
{
	if (x > 2)
	{
		a->stka.size = x - 1;
		a->args = malloc(sizeof(char *) * a->stka.size);
		a->args = &args[1];
	}
	if (x == 2)
	{
		a->stka.size = ft_cntwrd(args[1], ' ');
		a->args = malloc(sizeof(char *) * a->stka.size);
		a->args = ft_strsplit(args[1], ' ');
	}
	a->stkb.size = a->stka.size;
}

void	set(t_a *a, int x, char **argv)
{
	t_node	*stacka;
	t_node	*stackb;
	int		size;

	set_args(a, x, argv);
	stacka = malloc(sizeof(t_node) * a->stka.size);
	stackb = malloc(sizeof(t_node) * a->stkb.size);
	a->stka.top = -1;
	a->stkb.top = -1;
	size = a->stka.size;
	while (size >= 1)
	{
		if (ft_strequ(a->args[size - 1], ft_itoa(ft_atoi(a->args[size - 1]))))
		{
			stacka[a->stka.size - size].value = ft_atoi(a->args[size - 1]);
			a->stka.top++;
			size--;
		}
		else
			error();
	}
	setdata(&a->stka, stacka);
	if (check_dupes(a->stka))
		error();
	setdata(&a->stkb, stackb);
}

int		main(int argc, char **argv)
{
	t_a			a;
	char		**line;

	line = malloc(10);
	*line = malloc(10);
	set(&a, argc, argv);
	rank(&a);
	while (get_next_line(0, line) > 0)
		func(&a, *line);
	if (check_sort(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
