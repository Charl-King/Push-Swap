/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/15 16:00:44 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a		a;
	int		i;
	int		max;

	set(&a, argc, argv);
	rank(&a);
	i = 1;
	while (a.stka.top >= 3)
	{
		while (a.stka.top >= a.stka.size - (a.stka.size / FRACT * i))
		{
			if (a.stka.data[a.stka.top].rank <= (a.stka.size / FRACT * i))
				pb(&a);
			ra(&a);
		}
		i++;
	}
	sort3(&a.stka);
	print_stack(&a.stka);
	print_rank(&a.stka);
	max = max_rank(&a.stkb);
}
