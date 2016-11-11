/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:58:02 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:50:18 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			check_order(t_env *env)
{
	int	i;
	int	j;

	i = 0;
	j = env->a_len - 1;
	while (i < env->a_len && env->a_list[j] == env->sorted[i])
	{
		i++;
		j--;
	}
	if (i == env->a_len && env->b_len == 0)
		exit(EXIT_SUCCESS);
}

int				check(t_env *env)
{
	int	i;
	int	j;

	i = env->a_len - 1;
	j = 0;
	while (i > 0 && env->a_list[i] == env->sorted[j])
	{
		i--;
		j++;
	}
	if (i == 0 && env->b_len == 0)
		return (1);
	return (0);
}

static void		push_to_b(t_env *env)
{
	while (env->a_len > 1)
	{
		ft_putstr(pb(env));
		ft_putchar('\n');
	}
	ft_putstr(pb(env));
}

void			sort(t_env *env)
{
	check_order(env);
	push_to_b(env);
	ft_putchar('\n');
	while (env->b_len > 0)
	{
		if (env->b_list[env->b_len - 1] == env->sorted[env->i])
		{
			ft_putstr(pa(env));
			env->i--;
			if (env->b_len > 0)
				ft_putchar('\n');
		}
		else
			while (env->b_list[env->b_len - 1] != env->sorted[env->i])
			{
				if (next_pos(env, env->b_list, env->i) > (env->b_len / 2))
					ft_putstr(rb(env));
				else
					ft_putstr(rrb(env));
				ft_putchar('\n');
			}
	}
}

void			bubble_sort(t_env *env)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < env->a_len)
	{
		j = i + 1;
		while (j < env->a_len)
		{
			if (env->sorted[j] < env->sorted[i])
			{
				tmp = env->sorted[j];
				env->sorted[j] = env->sorted[i];
				env->sorted[i] = tmp;
			}
			j++;
		}
		i++;
	}
}
