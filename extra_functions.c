/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:15 by cking             #+#    #+#             */
/*   Updated: 2018/08/08 15:33:21 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void    print_stack(t_stack *stack)
{
    int i;

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
