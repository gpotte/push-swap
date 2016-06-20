/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 16:31:58 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/20 18:08:31 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	t_env env;

	check_args(ac, av);
	init_all(&env, ac);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	while (get_next_line(0, env.cmd) != -1)
		parse_cmd(&env);
//	if (check(&env) == 1)
//		ft_putstr("OK\n");
//	else
//		ft_putstr("KO\n");
	return (0);
}
