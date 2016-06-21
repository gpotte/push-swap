/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 16:31:58 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 14:34:24 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_env	env;
	char	*line;

	check_args(ac, av);
	init_all(&env, ac);
	fill_list(ac, av, &env);
	bubble_sort(&env);
	while (get_next_line(0, &line) > 0)
	{
		parse_cmd(&env, line);
	}
	if (check(&env) == 1)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
