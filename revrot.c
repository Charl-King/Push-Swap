/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:49:04 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 15:40:23 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrot(t_stack *stk)
{
	int tmp;
	int i;

	tmp = stk->data[0].value;
	i = 0;
	while (i < stk->top)
	{
		stk->data[i].value = stk->data[i + 1].value;
		i++;
	}
	stk->data[stk->top].value = tmp;
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
