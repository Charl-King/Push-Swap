/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:10:36 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 18:11:34 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		set_fract(t_a *a)
{
	if (a->stka.size < 200)
		a->fract = 5;
	else
		a->fract = 10;
}

void		push_blocks(t_a *a)
{
	int i;

	i = a->fract - 1;
	while (a->stka.top > 5)
	{
		while (a->stka.top > a->stka.size / a->fract * i\
		&& a->stka.top > 4)
		{
			if (a->stka.data[a->stka.top] > a->stka.size / a->fract\
			* i - 1 && a->stka.data[a->stka.top] > 4)
				pfunc(a, "pb");
			pfunc(a, "ra");
			i--;
		}
	}
}

void		push_back(t_a *a)
{
	int min;

	while (a->stkb.top != -1)
	{
		min = min_rank(&a->stkb);
		if (a->stkb.top - get_pos(&a->stkb, min) > a->stkb.top / 2)
		{
			while (a->stkb.data[a->stkb.top] != min)
				pfunc(a, "rrb");
			pfunc(a, "pa");
		}
		else
		{
			while (a->stkb.data[a->stkb.top] != min)
				pfunc(a, "rb");
			pfunc(a, "pa");
		}
	}
}
