/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:23:49 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 17:08:24 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_list(int ac, char **av, t_env *env)
{
	int i;
	int	j;

	i = ac - 1;
	j = 0;
	while (i > 0)
	{
		env->a_list[j] = ft_atoi(av[i]);
		env->sorted[j] = ft_atoi(av[i]);
		i--;
		j++;
	}
	while (i < ac - 2)
	{
		j = i + 1;
		while (j < ac - 1)
		{
			if (env->a_list[j] == env->a_list[i])
				ft_error();
			j++;
		}
		i++;	
	}
}
