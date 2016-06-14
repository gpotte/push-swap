/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 14:56:06 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 17:15:57 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	int 	i;
	t_env	env;

	i = 0;
	check_args(ac, av);
	init_all(&env, ac);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	sort(&env);
}

void	init_all(t_env *env, int ac)
{
	if (!(env->a_list = malloc(ac - 1)) || !(env->b_list = malloc(ac - 1)) ||
			!(env->sorted = malloc(ac - 1)))
		ft_error();
	env->a_len = ac - 1;
	env->b_len = 0;
	env->i = 2;
}
