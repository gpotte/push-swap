/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:00:32 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:54:21 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_single_arg(char *str)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_strsplit(str, ' ');
	while (tab[i])
	{
		if (ft_str_isdigit(tab[i]) == -1)
			ft_error();
		i++;
	}
	if (i == 1)
		exit(EXIT_SUCCESS);
	free(tab);
}

void	check_args(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 2)
		while (av[i])
		{
			if (ft_str_isdigit(av[i]) == -1)
				ft_error();
			i++;
		}
	if (ac == 2)
		check_single_arg(av[1]);
	if (ac == 1)
		exit(EXIT_SUCCESS);
}
