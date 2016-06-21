/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 13:25:44 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 14:33:29 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_env	env;

	check_args(ac, av);
	init_all(&env, ac);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	check_order(&env);
	if (env.a_len > 100)
		pre_sort(&env);
	if (env.a_len > 5)
		sort(&env);
	else
		few_args(&env);
	ft_putchar('\n');
	ft_putstr("\x1b[0m");
	ft_putnbr(env.j);
}
