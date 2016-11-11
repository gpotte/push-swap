/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 17:44:05 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:53:12 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_for_single(t_env *env, char *str)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_strsplit(str, ' ');
	while (tab[i])
		i++;
	if (!(env->a_list = malloc(sizeof(int) * i)) ||
			!(env->b_list = malloc(sizeof(int) * i)) ||
			!(env->sorted = malloc(sizeof(int) * i)))
		ft_error();
	env->a_len = i;
	env->sorted_len = i;
	env->b_len = 0;
	env->i = env->a_len - 1;
	if (env->a_len <= 5)
		env->i = 0;
	free(tab);
}

void	init_all(t_env *env, int ac, char **av)
{
	if (ac > 2)
	{
		if (!(env->a_list = malloc(sizeof(int) * (ac - 1))) ||
				!(env->b_list = malloc(sizeof(int) * (ac - 1))) ||
				!(env->sorted = malloc(sizeof(int) * (ac - 1))))
			ft_error();
		env->a_len = ac - 1;
		env->sorted_len = ac - 1;
		env->b_len = 0;
		env->i = env->a_len - 1;
		if (env->a_len <= 5)
			env->i = 0;
	}
	else
		init_for_single(env, av[1]);
	env->j = 0;
}
