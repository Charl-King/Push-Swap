/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/13 12:24:30 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	set(t_a *a, int x, char **arg)
{
	int		size;
	t_node	*stacka;
	char	**args;

	if (x > 2)
	{
		size = x - 1;
		args = malloc(sizeof(char *) * size);
		args = &arg[1];
	}
	if (x == 2)
	{
		size = ft_cntwrd(arg[1], ' ');
		args = malloc(sizeof(char *) * size);
		args = ft_strsplit(arg[1], ' ');
	}
	stacka = malloc(sizeof(t_node) * size);
	a->stka.top = -1;
	while (size >= 1)
	{
		stacka[size - 1].value = ft_atoi(args[size - 1]);
		a->stka.top++;
		size--;
	}
	setdata(&a->stka, stacka);
}

int		main(int argc, char **argv)
{
	t_a		a;

	set(&a, argc, argv);
}
