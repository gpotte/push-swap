/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:58:02 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/20 14:55:17 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_order(t_env *env)
{
	int	i;

	i = 0;
	while (i < env->a_len && env->a_list[i] == env->sorted[i])
		i++;
	if (i == env->a_len && env->b_len == 0)
		exit(EXIT_SUCCESS);
}
static void		push_to_b(t_env *env)
{
	while (env->a_len > 0)
	{
		ft_putstr(pb(env));
		ft_putchar(' ');
	}
}

void			sort(t_env *env)
{
	int	tmp;

	check_order(env);
	push_to_b(env);
	ft_putchar('\n');
	while (env->b_len > 0)
	{
		tmp = env->b_len - 1;
		while (env->b_list[tmp] != env->sorted[env->i])
			tmp--;
		if (env->b_list[env->b_len - 1] == env->sorted[env->i])
		{
			ft_putstr(pa(env));
			env->i--;
			if (env->b_len > 0)
				ft_putchar(' ');
		}
		else
			while (env->b_list[env->b_len - 1] != env->sorted[env->i])
			{
				if (tmp > (env->b_len / 2))
					ft_putstr(rb(env));
				else
					ft_putstr(rrb(env));
			ft_putchar(' ');
			}
	}
}

void			bubble_sort(t_env *env)
{
	int i;
	int j;
	int tmp;
	int	flag;

	i = 0;
	while (i < env->a_len)
	{
		j = i + 1;
		flag = 0;
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
