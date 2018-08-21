/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 10:18:34 by cking            ###   ########.fr       */
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
	set_fract(&a);
	push_blocks(&a);
	sort3(&a);
	push_back(&a);
	free(a.stka.data);
	free(a.stkb.data);
	exit(0);
}
