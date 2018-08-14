/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 09:35:01 by cking            ###   ########.fr       */
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
			stacka[size - 1].value = ft_atoi(a->args[size - 1]);
			a->stka.top++;
			size--;
		}
		else
			error();
	}
	setdata(&a->stka, stacka);
	setdata(&a->stkb, stackb);
}

void	func(t_a *a, char *func)
{
	if (!ft_strcmp(func, "pa"))
		pa(a);
	else if (!ft_strcmp(func, "pb"))
		pb(a);
	else if (!ft_strcmp(func, "sa"))
		sa(a);
	else if (!ft_strcmp(func, "sb"))
		sb(a);
	else if (!ft_strcmp(func, "ss"))
		ss(a);
	else if (!ft_strcmp(func, "ra"))
		ra(a);
	else if (!ft_strcmp(func, "rb"))
		rb(a);
	else if (!ft_strcmp(func, "rr"))
		rr(a);
	else if (!ft_strcmp(func, "rra"))
		rra(a);
	else if (!ft_strcmp(func, "rrb"))
		rrb(a);
	else if (!ft_strcmp(func, "rrr"))
		rrr(a);
	else
		error();
}

int		main(int argc, char **argv)
{
	t_a			a;
	char		**line;

	line = malloc(10);
	*line = malloc(10);
	set(&a, argc, argv);
	while (get_next_line(0, line) > 0)
		func(&a, *line);
	if (check_sort(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
