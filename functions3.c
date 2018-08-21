/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:01:29 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 10:18:32 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		set_args(t_a *a, int x, char **args)
{
	if (x > 2)
	{
		a->stka.size = x - 1;
		a->args = &args[1];
	}
	if (x == 2)
	{
		a->stka.size = ft_cntwrd(args[1], ' ');
		a->args = ft_strsplit(args[1], ' ');
	}
	a->stkb.size = a->stka.size;
}

void		set(t_a *a, int x, char **argv)
{
	int		size;
	char	*temp;

	set_args(a, x, argv);
	a->stka.data = malloc(sizeof(int) * a->stka.size);
	a->stkb.data = malloc(sizeof(int) * a->stkb.size);
	a->stka.top = -1;
	a->stkb.top = -1;
	size = a->stka.size;
	while (size >= 1)
	{
		temp = ft_itoa(ft_atoi(a->args[size - 1]));
		if (ft_strequ(a->args[size - 1], temp))
		{
			a->stka.data[a->stka.size - size] = ft_atoi(a->args[size - 1]);
			a->stka.top++;
			size--;
		}
		else
			error();
		free(temp);
	}
	//if (temp)
		// free(temp);
}

int			min_rank(t_stack *stack)
{
	int		min;
	int		i;

	min = stack->size;
	i = 0;
	while (i <= stack->top)
	{
		if (stack->data[i] < min)
			min = stack->data[i];
		i++;
	}
	return (min);
}

int			get_pos(t_stack *stack, int rank)
{
	int pos;

	pos = stack->top;
	while (stack->data[pos] != rank)
		pos--;
	return (pos);
}
