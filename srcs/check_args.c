/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:00:32 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/17 13:03:35 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 3)
		exit(EXIT_SUCCESS);
	while (av[i])
	{
		if (ft_str_isdigit(av[i]) == -1)
			ft_error();
		i++;
	}
}
