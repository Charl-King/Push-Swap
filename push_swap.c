/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:13 by cking             #+#    #+#             */
/*   Updated: 2018/08/20 16:45:29 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a		a;

	set(&a, argc, argv);
	if (check_dupes(&a.stka))
		error();
	rank(&a.stka);
	set_fract(&a);
	push_blocks(&a);
	sort3(&a);
	push_back(&a);
	
	// int i = 0;
	// while (i < a.stka.size)
	// {
	// 	free(a.args[i]);
	// 	i++;
	// }
	// free(a.args);
	free(a.stka.data);
	free(a.stkb.data);
	free((void *)a.args);
	ft_putstr(a.args[1]);
	free(a.args);
	exit(0);
	//free(argv[0]);
}
