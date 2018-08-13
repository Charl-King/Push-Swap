/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:15 by cking             #+#    #+#             */
/*   Updated: 2018/08/13 11:27:01 by cking            ###   ########.fr       */
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
