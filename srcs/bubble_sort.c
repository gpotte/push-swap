/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:58:02 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/15 14:56:25 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		back_in_a(t_env *env)
{
	while (env->b_len > 1)
	{
		ft_putstr(pa(env));
		ft_putchar(' ');
		env->i++;
	}
	ft_putstr(pa(env));
	ft_putnbr(env->i);
}

void			sort(t_env *env)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (env->a_len > 0)
	{
		i = env->a_len - 1;
		tmp = i;
		while (env->a_list[tmp] != env->sorted[j])
			tmp--;
		if (tmp == i)
		{
			ft_putstr(pb(env));
			j++;
			ft_putchar(' ');
			env->i++;
		}
		else
			while (env->a_list[i] != env->sorted[j])
			{
				if (tmp > env->a_len / 2)
					ft_putstr(ra(env));
				else
					ft_putstr(rra(env));
			env->i++;
			ft_putchar(' ');
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
