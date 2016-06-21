/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:00:32 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 12:37:12 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int ac, char **av)
{
	int i;

	i = 1;
	while (av[i])
	{
		if (ft_str_isdigit(av[i]) == -1)
			ft_error();
		i++;
	}
	if (ac < 3 && av[0][2] == 'p')
		exit(EXIT_SUCCESS);
}
