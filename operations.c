/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:24:38 by cking             #+#    #+#             */
/*   Updated: 2018/08/06 10:58:15 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

void	swap(t_list *list)
{
	int tmp;

	if (list && list->next)
	{
		tmp = list->data;
		list->next->data = list->data;
		list->data = tmp;
	}
}

void	push(t_list *a, t_list *b)
{
	t_list *tmp;

	if (b && a)
	{
		tmp = b;
		tmp->next = a;
		a = tmp;
		b = b->next;
	}
}

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
}
