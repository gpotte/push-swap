/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 13:25:44 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/25 17:32:35 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_env	env;

	check_args(ac, av);
	init_all(&env, ac, av);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	check_order(&env);
	if (env.a_len > 80)
		pre_sort(&env);
	if (env.a_len > 5)
		sort(&env);
	else
		few_args(&env);
	ft_putchar('\n');
}
