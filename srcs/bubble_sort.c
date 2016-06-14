/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:58:02 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 17:26:05 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_env *env)
{
	int	i;
	int	j;

	j = 0;
	while (env->a_len > 1)
	{
		i = env->a_len - 1;
		if (env->a_list[i] == env->sorted[j])
		{
			ft_putstr(pb(env));
			j++;
		}
		else
			ft_putstr(ra(env));
		ft_putchar(' ');
		env->i++;
	}
	ft_putstr(pb(env));
	ft_putchar(' ');
	while (env->b_len > 1)
	{
		ft_putstr(pa(env));
		ft_putchar(' ');
		env->i++;
	}
	ft_putstr(pa(env));
	ft_putnbr(env->i);
}

void	bubble_sort(t_env *env)
{
	int i;
	int j;
	int tmp;
	int	flag;

	i = 0;
	while (i < env->a_len)
	{
		j = 0;
		flag = 0;
		while (j < env->a_len)
		{
			if (env->sorted[j] < env->sorted[i] && j > i)
			{
				tmp = env->sorted[j];
				env->sorted[j] = env->sorted[i];
				env->sorted[i] = tmp;
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			i++;
	}
}
