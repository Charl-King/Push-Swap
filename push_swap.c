/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 18:11:58 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a		a;

	set(&a, argc, argv);
	if (check_dupes(&a.stka))
		error();
	rank(&a.stka);
	a.stkb.top = -1;
	set_fract(&a);
	if (!check_stack(a.stka))
	{
		push_blocks(&a);
		sort5(&a);
		push_back(&a);
	}
	free(a.stka.data);
	free(a.stkb.data);
	exit(0);
}
