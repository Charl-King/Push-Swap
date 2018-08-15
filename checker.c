/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:52 by cking             #+#    #+#             */
/*   Updated: 2018/08/15 09:03:11 by cking            ###   ########.fr       */
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
	rank(&a);
	while (get_next_line(0, line) > 0)
		func(&a, *line);
	if (check_sort(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
