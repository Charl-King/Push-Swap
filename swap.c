/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:51:57 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 10:56:24 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_a *a)
{
	swap(&a->stka);
}

void	sb(t_a *a)
{
	swap(&a->stkb);
}

void	ss(t_a *a)
{
	swap(&a->stka);
	swap(&a->stkb);
}