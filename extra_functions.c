/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:15 by cking             #+#    #+#             */
/*   Updated: 2018/08/14 08:48:19 by cking            ###   ########.fr       */
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

int			ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

void		error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int			check_sort(t_a *a)
{
	int				i;

	i = 0;
	if (a->stkb.top != -1)
		return (0);
	while (i < a->stka.size - 1)
	{
		if (a->stka.data[i].value >= a->stka.data[i + 1].value)
			return (0);
		i++;
	}
	return (1);
}

void		setdata(t_stack *stack, t_node *nodes)
{
	stack->data = nodes;
}
