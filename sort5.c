/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:29:02 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 17:34:30 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_a *a)
{
	while (a->stka.top >= 3)
		pfunc(a, "pb");
	if (!check_stack(a->stka))
		sort3(a);
	while (a->stka.top != 4 && a->stkb.top != -1)
	{
		if (a->stkb.data[a->stkb.top] > a->stka.data[a->stka.top])
			pfunc(a, "pa");
		else if (a->stkb.data[a->stkb.top] < a->stka.data[0])
			insert_start(a);
		else if (a->stkb.data[a->stkb.top] > a->stka.data[a->stka.top - 1])
		{
			pfunc(a, "ra");
			pfunc(a, "pa");
			pfunc(a, "rra");
		}
		else if (a->stkb.data[a->stkb.top] < a->stka.data[1])
		{
			pfunc(a, "rra");
			pfunc(a, "pa");
			pfunc(a, "ra");
			pfunc(a, "ra");
		}
		else
		{
			pfunc(a, "ra");
			pfunc(a, "ra");
			pfunc(a, "pa");
			pfunc(a, "rra");
			pfunc(a, "rra");
		}
	}
}

void			sort3(t_a *a)
{
	if (a->stka.data[a->stka.top] == min_rank(&a->stka))
		pfunc(a, "ra");
	if (a->stka.data[a->stka.top - 1] == min_rank(&a->stka))
		pfunc(a, "rra");
	if (!check_stack(a->stka))
		pfunc(a, "sa");
}

void			insert_start(t_a *a)
{
	pfunc(a, "pa");
	pfunc(a, "ra");
}
