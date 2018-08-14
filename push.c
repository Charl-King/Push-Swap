/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 12:20:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 12:56:13 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *a, t_stack *b)
{
	if (b->top > -1)
	{
		a->top++;
		a->data[a->top] = b->data[b->top];
		b->top--;
	}
}

void	pa(t_a *a)
{
	push(&a->stka, &a->stkb);
}

void	pb(t_a *a)
{
	push(&a->stkb, &a->stka);
}
