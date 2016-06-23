/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 12:51:40 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/23 11:52:08 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void algo(t_env *env)
{
	int	i;
	int	j;

	i = env->a_len - 1;
	j = 1;
	while (!check(env))
	{
		while (env->a_list[i - 1] != env->sorted[j])
		{
			//if (next_pos(env, env->a_list, j) > (env->a_len / 2))
			//	ft_putstr(ra(env));
			//else
				ft_putstr(rra(env));
			ft_putchar(' ');
		}
		while (env->a_list[0] != env->sorted[j - 1])
		{
			ft_putstr(sa(env));
			ft_putchar(' ');
			ft_putstr(rra(env));
			ft_putchar(' ');
		}
		if (env->a_list[i] != env->sorted[j])
		{
			ft_putstr(sa(env));
			ft_putchar(' ');
		}
		j ++;
		ft_putstr(ra(env));	
		ft_putchar(' ');
	}
}

int main(int ac, char **av)
{
	t_env	env;
	int		j;

	j = 0;
	check_args(ac, av);
	init_all(&env, ac);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	check_order(&env);
	if (env.a_len > 5)
	{
		pre_sort(&env);
		while (env.b_len)
			ft_putstr(pa(&env));
		algo(&env);
	}
	else
		few_args(&env);
	ft_putchar('\n');
	ft_putstr("\x1b[0m");
	while (j < env.a_len)
	{
		ft_putnbr_fd(env.a_list[j], 2);
		ft_putchar_fd(' ', 2);
		j++;
	}
	ft_putchar_fd('\n', 2);
	ft_putnbr_fd(env.j, 2);
	ft_putchar_fd('\n', 2);
}
