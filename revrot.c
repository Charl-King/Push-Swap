/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:49:04 by cking             #+#    #+#             */
/*   Updated: 2018/08/20 14:30:49 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrot(t_stack *stk)
{
	int	tmp;
	int		i;

	tmp = stk->data[0];
	i = 0;
	while (i < stk->top)
	{
		stk->data[i] = stk->data[i + 1];
		i++;
	}
	stk->data[stk->top] = tmp;
}

void	rra(t_a *a)
{
	revrot(&a->stka);
}

void	rrb(t_a *a)
{
	revrot(&a->stkb);
}

void	rrr(t_a *a)
{
	revrot(&a->stka);
	revrot(&a->stkb);
}
