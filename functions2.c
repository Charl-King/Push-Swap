/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:58:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/15 09:02:49 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (a->stka.data[i].value < a->stka.data[i + 1].value)
			return (0);
		i++;
	}
	return (1);
}
