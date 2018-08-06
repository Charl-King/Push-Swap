/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:02:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/06 11:13:35 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH-SWAP_H
# define PUSH-SWAP_H

# include "list.h"

typedef struct  s_list
{
    int data;
    struct s_list *next;
}               t_list;

void push (t_list *a, t_list *b);
void swap (t_list *list);
void rot (t_list *list);
void revrot (t_list *list);

#endif