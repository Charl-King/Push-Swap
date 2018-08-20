/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:45:40 by cking             #+#    #+#             */
/*   Updated: 2018/08/20 14:30:05 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot(t_stack *stk)
{
	int		tmp;
	int		i;

	i = 0;
	tmp = stk->data[stk->top];
	while (i < stk->top)
	{
		stk->data[stk->top - i] = stk->data[stk->top - i - 1];
		i++;
	}
	stk->data[0] = tmp;
}

void	ra(t_a *a)
{
	rot(&a->stka);
}

void	rb(t_a *a)
{
	rot(&a->stkb);
}

void	rr(t_a *a)
{
	rot(&a->stka);
	rot(&a->stkb);
}
