/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:17:09 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 10:28:04 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int		main(void)
{
	t_stack		a;
	t_stack		b;
	t_node		node[10];
	t_node		nodeb[10];
	int			i;

	i = 0;
	a.size = 10;
	b.size = 10;
	a.top = -1;
	b.top = -1;
	while (i < a.size)
	{
		node[++a.top].value = i;
		nodeb[++b.top].value = i;
		i++;
	}
	setdata(&a, *&node);
	setdata(&b, *&nodeb);
	print_stack(&a);
	revrot(&a);
	print_stack(&a);
}
