/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 11:11:06 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/20 14:45:45 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(t_env *env)
{
	int	tmp;

	tmp = 0;
	while (env->b_len < (CHUNKS - 1) * env->sorted_len / CHUNKS)
	{
		if (env->b_len == tmp)
			tmp += env->sorted_len / CHUNKS;
		if (env->a_list[env->a_len - 1] <= env->sorted[tmp])
			ft_putstr(pb(env));
		else
			ft_putstr(ra(env));
		ft_putchar(' ');
	}
}
