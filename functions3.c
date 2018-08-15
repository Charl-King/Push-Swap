/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:01:29 by cking             #+#    #+#             */
/*   Updated: 2018/08/15 15:07:39 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		setdata(t_stack *stack, t_node *nodes)
{
	stack->data = nodes;
}

void		set_args(t_a *a, int x, char **args)
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

void		set(t_a *a, int x, char **argv)
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

int			max_rank(t_stack *stack)
{
	int		max;
	int		i;

	max = 0;
	i = 0;
	while (i <= stack->size)
	{
		if (stack->data[i].rank > max)
			max = stack->data[i].rank;
		i++;
	}
	return (max);
}
