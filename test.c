/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:17:09 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 14:52:17 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int		main(void)
{
	t_a			a;
	t_node		nodea[15];
	t_node		nodeb[15];
	int			i;

	i = 0;
	a.stka.size = 10;
	a.stkb.size = 10;
	a.stka.top = -1;
	a.stkb.top = -1;
	while (i < a.stka.size)
	{
		nodea[++a.stka.top].value = i;
		nodeb[++a.stkb.top].value = i;
		i++;
	}
	setdata(&a.stka, *&nodea);
	setdata(&a.stkb, *&nodeb);
	rrr(&a);
	print_stack(&a.stka);
	print_stack(&a.stkb);
}

