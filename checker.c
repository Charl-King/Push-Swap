/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 18:13:20 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_a			a;
	char		**line;

	line = malloc(10);
	*line = malloc(10);
	set(&a, argc, argv);
	rank(&a.stka);
	while (get_next_line(0, line) > 0)
		func(&a, *line);
	if (check_stack(a.stka))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit(0);
}
