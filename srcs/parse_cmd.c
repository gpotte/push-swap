/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 16:15:56 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 12:35:13 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	use_cmd(t_env *env, char *line)
{
	if (!ft_strcmp(line, "sa"))
		sa(env);
	else if (!ft_strcmp(line, "sb"))
		sb(env);
	else if (!ft_strcmp(line, "ss"))
		ss(env);
	else if (!ft_strcmp(line, "pa"))
		pa(env);
	else if (!ft_strcmp(line, "pb"))
		pb(env);
	else if (!ft_strcmp(line, "ra"))
		ra(env);
	else if (!ft_strcmp(line, "rb"))
		rb(env);
	else if (!ft_strcmp(line, "rr"))
		rr(env);
	else if (!ft_strcmp(line, "rra"))
		rra(env);
	else if (!ft_strcmp(line, "rrb"))
		rrb(env);
	else if (!ft_strcmp(line, "rrr"))
		rrr(env);
}

void		parse_cmd(t_env *env, char *line)
{
	if (ft_strlen(line) < 2 || ft_strlen(line) > 3)
		ft_error();
	if (ft_strcmp(line, "sa") && ft_strcmp(line, "sb") &&
			ft_strcmp(line, "ss") && ft_strcmp(line, "pa") &&
			ft_strcmp(line, "pb") && ft_strcmp(line, "ra") &&
			ft_strcmp(line, "rb") && ft_strcmp(line, "rr") &&
			ft_strcmp(line, "rra") && ft_strcmp(line, "rrb") &&
			ft_strcmp(line, "rrr"))
		ft_error();
	use_cmd(env, line);
}
