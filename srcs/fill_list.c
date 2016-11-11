/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 15:23:49 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:53:42 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_dubs(int ac, t_env *env)
{
	int	i;
	int	j;

	i = 0;
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

void		single_arg_fill(char *str, t_env *env)
{
	int		i;
	int		len;
	int		j;
	char	**tab;

	i = 0;
	tab = ft_strsplit(str, ' ');
	while (tab[i])
		i++;
	len = i;
	j = 0;
	i--;
	while (i > 0)
	{
		env->a_list[j] = ft_atoi(tab[i]);
		j++;
		i--;
	}
	check_dubs(len + 1, env);
	while (i < env->a_len)
	{
		env->sorted[i] = env->a_list[i];
		i++;
	}
}

void		fill_list(int ac, char **av, t_env *env)
{
	int i;
	int	j;

	if (ac > 2)
	{
		i = ac - 1;
		j = 0;
		while (i > 0)
		{
			env->a_list[j] = ft_atoi(av[i]);
			i--;
			j++;
		}
		check_dubs(ac, env);
		while (i < env->a_len)
		{
			env->sorted[i] = env->a_list[i];
			i++;
		}
	}
	else
		single_arg_fill(av[1], env);
}
