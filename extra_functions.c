/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:15 by cking             #+#    #+#             */
/*   Updated: 2018/08/16 11:31:03 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void		print_stack(t_stack *stack)
{
	int				i;

	i = 0;
	printf("---Stack data---\n");
	while (i <= stack->top)
	{
		printf("%d ", stack->data[i].value);
		i++;
		if (i % 10 == 0)
			printf("\n");
	}
	printf("\n");
}

void		print_rank(t_stack *stack)
{
	int				i;

	i = 0;
	printf("---Stack data---\n");
	while (i <= stack->top)
	{
		printf("%d ", stack->data[i].rank);
		i++;
		if (i % 10 == 0)
			printf("\n");
	}
	printf("\n");
}

int			doc(t_stack *stack)
{
	int		i;
	int		add;
	int		doc;

	i = 0;
	doc = 0;
	while (i < stack->size)
	{
		add = ft_abs(i + 1 - stack->data[i].rank);
		if ((stack->size - add) < add)
			add = stack->size - add;
		doc += add;
		i++;
	}
	return (doc);
}
