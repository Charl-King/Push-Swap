/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:26:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/15 15:49:01 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int		doc(t_stack *stack)
{
	int		i;
	int		add;
	int		doc;

	i = 0;
	doc = 0;
	while (i < stack->size)
	{
		add = ft_abs(i + 1 - stack->data[i].rank);
		if ((stack->size - add) < add)
			add = stack->size - add;
		doc += add;
		i++;
	}
	return (doc);
}

void		sort3(t_stack *stack)
{
	if (stack->data[stack->top].rank == 1)
		swap(stack);
	if (stack->data[stack->top - 1].rank == 1)
		revrot(stack);
	if (stack->data[stack->top].rank == 2)
		swap(stack);
}
