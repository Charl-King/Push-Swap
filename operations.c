/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:24:38 by cking             #+#    #+#             */
/*   Updated: 2018/08/07 13:29:57 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	swap(t_stack *stack)
{
	t_node tmp;

	tmp = stack->data[stack->top - 1];
	stack->data[stack->top - 1] = stack->data[stack->top];
	stack->data[stack->top] = tmp;
}

void	push(t_stack *a, t_stack *b)
{
	a->top++;
	a->data[a->top] = b->data[b->top];
	b->top--;
}
/*
void	rot(t_list *list)
{
	t_list	*tmplist;
	t_list	new;

	tmplist = list->next;
	new.data = list->data;
	new.next = NULL;
	while (list->next)
		list = list->next;
	list->next = &new;
	list = tmplist;
}

void	revrot(t_list *list)
{
	t_list	*tmp;
	t_list	*new;

	tmp = list;
	while (tmp->next->next)
		tmp = tmp->next;
	new = tmp->next;
	new->next = list;
	tmp->next = NULL;
	list = new;
}*/
