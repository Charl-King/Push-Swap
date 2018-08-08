/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:45:40 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 15:40:21 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot(t_stack *stk)
{
	int tmp;
	int i;

	i = 0;
	tmp = stk->data[stk->top].value;
	while (i < stk->top)
	{
		stk->data[stk->top - i].value = stk->data[stk->top - i - 1].value;
		i++;
	}
	stk->data[0].value = tmp;
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
