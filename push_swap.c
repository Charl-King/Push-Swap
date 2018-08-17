/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/17 10:40:00 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a		a;

	set(&a, argc, argv);
	rank(&a);
	set_fract(&a);
	push_blocks(&a);
	sort3(&a);
	push_back(&a);
}
