/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:43:56 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/14 13:09:31 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*rra(t_env *env)
{
	int	tmp;
	int	i;

	if (env->a_len < 1)
		return (NULL);
	i = 0;
	tmp = env->a_list[0];
	while (i < env->a_len - 1)
	{
		env->a_list[i] = env->a_list[i + 1];
		i++;
	}
	env->a_list[i] = tmp;
	return ("rra");
}

char	*rrb(t_env *env)
{
	int	tmp;
	int	i;

	if (env->b_len < 1)
		return (NULL);
	i = 0;
	tmp = env->b_list[0];
	while (i < env->b_len - 1)
	{
		env->b_list[i] = env->b_list[i + 1];
		i++;
	}
	env->b_list[i] = tmp;
	return ("rrb");
}

char	*rrr(t_env *env)
{
	rrb(env);
	rra(env);
	return ("rrr");
}
