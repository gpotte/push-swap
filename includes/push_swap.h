/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:37:57 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/23 17:18:40 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define CHUNKS 16

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_env
{
	int			a_len;
	int			b_len;
	int			sorted_len;
	int			*a_list;
	int			*b_list;
	int			*sorted;
	int			i;
	int			j;
}				t_env;

int				main(int ac, char **av);
void			check_args(int ac, char **av);
void			fill_list(int ac, char **av, t_env *env);
void			init_all(t_env *env, int ac);

/*
** REVERSE_ROTATE
*/

char			*rra(t_env *env);
char			*rrb(t_env *env);
char			*rrr(t_env *env);

/*
**	ROTATE
*/

char			*ra(t_env *env);
char			*rb(t_env *env);
char			*rr(t_env *env);

/*
** PUSH
*/

char			*pa(t_env *env);
char			*pb(t_env *env);

/*
** SWAP
*/

char			*sa(t_env *env);
char			*sb(t_env *env);
char			*ss(t_env *env);

/*
** BUBBLE_SORT
*/

void			sort(t_env *env);
void			bubble_sort(t_env *env);
void			check_order(t_env *env);
int				check(t_env *env);
void			pre_sort(t_env *env);

/*
** CHECKER
*/

int				checker(int ac, char **av);
void			parse_cmd(t_env *env, char *line);

/*
** FEW_ARGS
*/

void			few_args(t_env *env);
int				next_pos(t_env *env, int *list, int i);
#endif
