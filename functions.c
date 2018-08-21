/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:26:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 17:29:22 by cking            ###   ########.fr       */
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

int		check_dupes(t_stack *stack)
{
	int i;
	int j;

	i = 0;
	while (i < stack->size)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack->data[i] == stack->data[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	rank(t_stack *stack)
{
	int		i;
	int		j;
	int		*rank;

	i = 0;
	rank = malloc(sizeof(int) * stack->size);
	while (i < stack->size)
	{
		j = 0;
		rank[i] = 1;
		while (j < stack->size)
			if (stack->data[j++] < stack->data[i])
				rank[i]++;
		i++;
	}
	i = -1;
	while (++i < stack->size)
		stack->data[i] = rank[i];
	free(rank);
}
