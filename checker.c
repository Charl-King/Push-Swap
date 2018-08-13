/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/13 17:10:22 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	set(t_a *a, int x, char **arg)
{
	t_node	*stacka;
	char	**args;
	int		size;

	if (x > 2)
	{
		a->stka.size = x - 1;
		args = malloc(sizeof(char *) * a->stka.size);
		args = &arg[1];
	}
	if (x == 2)
	{
		a->stka.size = ft_cntwrd(arg[1], ' ');
		args = malloc(sizeof(char *) * a->stka.size);
		args = ft_strsplit(arg[1], ' ');
	}
	stacka = malloc(sizeof(t_node) * a->stka.size);
	a->stka.top = -1;
	size = a->stka.size;
	while (size >= 1)
	{
		stacka[size - 1].value = ft_atoi(args[size - 1]);
		a->stka.top++;
		size--;
	}
	setdata(&a->stka, stacka);
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

int		check_sort(t_a *a)
{
	int i;

	i = 0;
	if (a->stkb.top != -1)
		return (0);
	while (i < a->stka.size - 1)
	{
		if (a->stka.data[i].value >= a->stka.data[i + 1].value)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_a			a;
	char		**line;
	t_node		nodeb[15];

	a.stkb.size = 10;
	line = malloc(10);
	*line = malloc(10);
	set(&a, argc, argv);
	a.stkb.top = -1;
	setdata(&a.stkb, *&nodeb);
	while (get_next_line(0, line) > 0)
		func(&a, *line);

	if (check_sort(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
