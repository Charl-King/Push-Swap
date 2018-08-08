/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:24:38 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 10:29:19 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	swap(t_stack *stack)
{
	int tmp;

	tmp = stack->data[stack->top].value;
	stack->data[stack->top].value = stack->data[stack->top - 1].value;
	stack->data[stack->top - 1].value = tmp;
}

void	push(t_stack *a, t_stack *b)
{
	a->top++;
	a->data[a->top].value = b->data[b->top].value;
	b->top--;
}

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
