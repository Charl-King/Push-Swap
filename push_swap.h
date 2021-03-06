/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:02:43 by cking             #+#    #+#             */
/*   Updated: 2018/08/21 17:33:07 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define FRACT 10

# include "./libft/libft.h"

typedef struct		s_stack
{
	int				size;
	int				*data;
	int				top;
}					t_stack;

typedef struct		s_a
{
	t_stack			stka;
	t_stack			stkb;
	char			**args;
	int				fract;
}					t_a;

void				push		(t_stack *a, t_stack *b);
void				swap		(t_stack *stack);
void				rot			(t_stack *stack);
void				revrot		(t_stack *stack);
void				print_stack	(t_stack *stack);
void				insert_start(t_a *a);
int					ft_cntwrd	(char const *s, char c);
void				error		(void);
int					check_sort	(t_a *a);
void				func		(t_a *a, char *funct);
void				pfunc		(t_a *a, char *funct);
int					check_dupes	(t_stack *stack);
int					doc			(t_stack *stack);
void				rank		(t_stack *stack);
void				set_args	(t_a *a, int x, char **args);
void				set			(t_a *a, int x, char **argv);
int					min_rank	(t_stack *stack);
void				sort3		(t_a *a);
void				sort5		(t_a *a);
int					get_pos		(t_stack *stack, int rank);
void				set_fract	(t_a *a);
void				push_blocks	(t_a *a);
void				push_back	(t_a *a);
int					check_stack	(t_stack stk);
void				sa			(t_a *a);
void				sb			(t_a *a);
void				ss			(t_a *a);
void				pa			(t_a *a);
void				pb			(t_a *a);
void				ra			(t_a *a);
void				rb			(t_a *a);
void				rr			(t_a *a);
void				rra			(t_a *a);
void				rrb			(t_a *a);
void				rrr			(t_a *a);

#endif
