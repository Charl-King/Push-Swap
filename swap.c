/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:51:57 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 12:58:54 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node tmp;

	if (stack->top > 0)
	{
		tmp = stack->data[stack->top];
		stack->data[stack->top] = stack->data[stack->top - 1];
		stack->data[stack->top - 1] = tmp;
	}
}

void	sa(t_a *a)
{
	swap(&a->stka);
}

void	sb(t_a *a)
{
	swap(&a->stkb);
}

void	ss(t_a *a)
{
	swap(&a->stka);
	swap(&a->stkb);
}
