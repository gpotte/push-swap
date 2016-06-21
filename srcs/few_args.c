/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 12:58:30 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 14:43:43 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	triple_arg_2(t_env *env, int a, int b, int c)
{
	if (b < c && b > a)
	{
		ft_putstr(ra(env));
		ft_putchar(' ');
		ft_putstr(sa(env));
		if (env->b_len > 0)
			ft_putchar(' ');
	}
	else if ((a > b && a < c) || (a < b && a > c))
	{
		if (a < b)
		{
			ft_putstr(sa(env));
			ft_putchar(' ');
		}
		ft_putstr(ra(env));
		if (env->b_len > 0)
			ft_putchar(' ');
	}
}

static void	triple_arg(t_env *env)
{
	int a;
	int b;
	int c;

	a = env->a_list[0];
	b = env->a_list[1];
	c = env->a_list[2];
	if ((c > b && c < a) || (c < b && c > a))
	{
		if (c > b)
			ft_putstr(sa(env));
		else
			ft_putstr(rra(env));
		if (env->b_len > 0)
			ft_putchar(' ');
	}
	else
		triple_arg_2(env, a, b, c);
}

static void	penta_arg(t_env *env)
{
	while (env->a_len > 3)
	{
		if (env->a_list[env->a_len - 1] == env->sorted[env->i])
		{
			ft_putstr(pb(env));
			env->i++;
		}
		else
		{
			if (next_pos(env, env->a_list, env->i) > (env->b_len / 2 + 1))
				ft_putstr(ra(env));
			else
				ft_putstr(rra(env));
		}
		ft_putchar(' ');
	}
	triple_arg(env);
	while (env->b_len > 0)
	{
		ft_putstr(pa(env));
		if (env->b_len > 0)
			ft_putchar(' ');
	}
}

void		few_args(t_env *env)
{
	if (env->a_len > 3)
		penta_arg(env);
	else
		triple_arg(env);
}
