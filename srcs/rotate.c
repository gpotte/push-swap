/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:37:32 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:32:37 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ra(t_env *env)
{
	int	tmp;
	int	i;

	if (env->a_len < 1)
		return ("");
	i = env->a_len - 1;
	tmp = env->a_list[env->a_len - 1];
	while (i > 0)
	{
		env->a_list[i] = env->a_list[i - 1];
		i--;
	}
	env->a_list[i] = tmp;
	env->j++;
	return ("ra");
}

char	*rb(t_env *env)
{
	int	tmp;
	int	i;

	if (env->b_len < 1)
		return ("");
	i = env->b_len - 1;
	tmp = env->b_list[env->b_len - 1];
	while (i > 0)
	{
		env->b_list[i] = env->b_list[i - 1];
		i--;
	}
	env->b_list[i] = tmp;
	env->j++;
	return ("rb");
}

char	*rr(t_env *env)
{
	rb(env);
	ra(env);
	env->j--;
	return ("rr");
}
