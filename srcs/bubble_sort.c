/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:58:02 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/17 13:20:58 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		first_hit(t_env *env)
{
	if (env->a_list[env->a_len - 2] == env->sorted[env->i])
	{
		ft_putstr(sa(env));
			env->j++;
		ft_putchar(' ');
	}
}

static int		check_order(t_env *env)
{
	int	i;

	i = 0;
	while (i < env->a_len && env->a_list[i] == env->sorted[i])
		i++;
	if (i == env->a_len)
		return (1);
	return (0);
}
static void		back_in_a(t_env *env)
{
	first_hit(env);
	while (env->b_len > 0)
	{
		ft_putstr(pa(env));
			env->j++;
		if (env->b_len > 0)
			ft_putchar(' ');
	}
}

void			sort(t_env *env)
{
	int	tmp;

	if (check_order(env) == 1)
		exit(EXIT_SUCCESS);
	first_hit(env);
	while (env->a_len > 2)
	{
		tmp = env->a_len - 1;
		while (env->a_list[tmp] != env->sorted[env->i])
			tmp--;
		if (env->a_len - 1 == tmp)
		{
			ft_putstr(pb(env));
			env->i++;
			env->j++;
			ft_putchar(' ');
		}
		else
			while (env->a_list[env->a_len - 1] != env->sorted[env->i])
			{
				if (tmp > (env->a_len / 2))
					ft_putstr(ra(env));
				else
					ft_putstr(rra(env));
			ft_putchar(' ');
			env->j++;
			}
	}
	back_in_a(env);
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
