/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:23:49 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 10:58:15 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_list(int ac, char **av, int **list)
{
	int i;

	i = 1;
	while (i < ac)
	{
		(*list)[i - 1] = ft_atoi(av[i]);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		ft_putnbr((*list)[i]);
		ft_putchar('\n');
		i++;
	}
}
