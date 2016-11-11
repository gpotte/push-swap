/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 11:11:06 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:45:41 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ra_or_rra(t_env *env, int tmp)
{
	int	i;
	int	j;

	while (env->a_list[env->a_len - 1] < tmp)
	{
		i = 0;
		j = env->a_len - 2;
		while (env->a_list[i] < tmp)
			i++;
		while (env->a_list[j] < tmp)
			j--;
		if (i < ((env->a_len - 1) - j))
			ft_putstr(rra(env));
		else
			ft_putstr(ra(env));
		ft_putchar('\n');
	}
}

void		pre_sort(t_env *env)
{
	int	tmp;

	tmp = env->a_len;
	while (env->b_len < (CHUNKS - 1) * env->sorted_len / CHUNKS)
	{
		if (env->b_len == env->sorted_len - tmp)
			tmp -= env->sorted_len / CHUNKS;
		if (env->a_list[env->a_len - 1] >= env->sorted[tmp])
		{
			ft_putstr(pb(env));
			ft_putchar('\n');
		}
		else
			ra_or_rra(env, env->sorted[tmp]);
	}
}
