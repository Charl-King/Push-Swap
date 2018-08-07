/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:02:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/07 13:30:18 by cking            ###   ########.fr       */
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

void push		(t_stack *a, t_stack *b);
void swap		(t_stack *stack);
void rot		(t_stack *stack);
void revrot		(t_stack *stack);
#endif
