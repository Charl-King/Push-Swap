/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:26:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/16 10:04:25 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func(t_a *a, char *funct)
{
	if (!ft_strcmp(funct, "pa"))
		pa(a);
	else if (!ft_strcmp(funct, "pb"))
		pb(a);
	else if (!ft_strcmp(funct, "sa"))
		sa(a);
	else if (!ft_strcmp(funct, "sb"))
		sb(a);
	else if (!ft_strcmp(funct, "ss"))
		ss(a);
	else if (!ft_strcmp(funct, "ra"))
		ra(a);
	else if (!ft_strcmp(funct, "rb"))
		rb(a);
	else if (!ft_strcmp(funct, "rr"))
		rr(a);
	else if (!ft_strcmp(funct, "rra"))
		rra(a);
	else if (!ft_strcmp(funct, "rrb"))
		rrb(a);
	else if (!ft_strcmp(funct, "rrr"))
		rrr(a);
	else
		error();
}

void	pfunc(t_a *a, char *funct)
{
	func(a, funct);
	ft_putendl(funct);
}

int		check_dupes(t_stack stack)
{
	int i;
	int j;

	i = 0;
	while (i < stack.size)
	{
		j = i + 1;
		while (j < stack.size)
		{
			if (stack.data[i].value == stack.data[j].value)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	rank(t_a *a)
{
	int		i;
	int		j;
	int		rank;

	i = 0;
	while (i < a->stka.size)
	{
		j = 0;
		rank = a->stka.size;
		while (j < a->stka.size)
			if (a->stka.data[j++].value < a->stka.data[i].value)
				rank--;
		a->stka.data[i++].rank = rank;
	}
}

void	sort3(t_a *a)
{
	if (a->stka.data[a->stka.top].rank == 1)
		pfunc(a, "sa");
	if (a->stka.data[a->stka.top - 1].rank == 1)
		pfunc(a, "rra");
	if (a->stka.data[a->stka.top].rank == 2)
		pfunc(a, "sa");
}
