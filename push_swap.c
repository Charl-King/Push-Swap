/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/16 15:05:58 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a		a;
	int		i;
	int		min;

	set(&a, argc, argv);
	rank(&a);
	ft_putstr_fd("DOC : ", 2);
	ft_putnbr_fd(doc(&a.stka), 2);
	ft_putchar_fd('\n', 2);
	i = FRACT - 1;
	while (a.stka.top >= 3)
	{
		while (a.stka.top > a.stka.size / FRACT * i\
		&& a.stka.top >= 3)
		{
			if (a.stka.data[a.stka.top].rank > a.stka.size / FRACT * i + 1\
			&& a.stka.data[a.stka.top].rank > 3)
				pfunc(&a, "pb");
			pfunc(&a, "ra");
		}
		i--;
	}
	sort3(&a);
	while (a.stkb.top != -1)
	{
		min = min_rank(&a.stkb);
		if (a.stkb.top - get_pos(&a.stkb, min) > a.stkb.top / 2)
		{
			while (a.stkb.data[a.stkb.top].rank != min)
				pfunc(&a, "rrb");
			pfunc(&a, "pa");
		}
		else
		{
			while (a.stkb.data[a.stkb.top].rank != min)
				pfunc(&a, "rb");
			pfunc(&a, "pa");
		}
	}
	//print_stack(&a.stka);
}
