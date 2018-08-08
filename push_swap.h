/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:02:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 14:45:07 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_node
{
	int				value;
	int				rank;
}					t_node;

typedef struct		s_stack
{
	int				size;
	t_node			*data;
	int				top;
}					t_stack;

typedef struct		s_a
{
	t_stack			stka;
	t_stack			stkb;
}					t_a;

void	push		(t_stack *a, t_stack *b);
void	swap		(t_stack *stack);
void	rot			(t_stack *stack);
void	revrot		(t_stack *stack);
void	print_stack	(t_stack *stack);
void	setdata		(t_stack *stack, t_node *nodes);
void	sa			(t_a *a);
void	sb			(t_a *a);
void	ss			(t_a *a);
void	pa			(t_a *a);
void	pb			(t_a *a);
void	ra			(t_a *a);
void	rb			(t_a *a);
void	rr			(t_a *a);
void	rra			(t_a *a);
void	rrb			(t_a *a);
void	rrr			(t_a *a);

#endif
