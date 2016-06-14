/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:37:57 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 11:05:48 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_env
{
	int			a_len;
	int			b_len;
	int			*a_list;
	int			*b_list;
}				t_env;

int				main(int ac, char **av);
void			check_args(int ac, char **av);
void			fill_list(int ac, char **av, int **list);
void			init_all(t_env *env, int ac);

#endif
