/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 12:20:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 15:47:40 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *a, t_stack *b)
{
	a->top++;
	a->data[a->top].value = b->data[b->top].value;
	b->top--;
}

void	pa(t_a *a)
{
	push(&a->stka, &a->stkb);
}

void	pb(t_a *a)
{
	push(&a->stkb, &a->stka);
}
