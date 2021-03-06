/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:16:52 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:32:53 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*sa(t_env *env)
{
	int	tmp;

	if (env->a_len < 2)
		return ("");
	tmp = env->a_list[env->a_len - 1];
	env->a_list[env->a_len - 1] = env->a_list[env->a_len - 2];
	env->a_list[env->a_len - 2] = tmp;
	env->j++;
	return ("sa");
}

char	*sb(t_env *env)
{
	int	tmp;

	if (env->b_len < 2)
		return ("");
	tmp = env->b_list[env->b_len - 1];
	env->b_list[env->b_len - 1] = env->b_list[env->b_len - 2];
	env->b_list[env->b_len - 2] = tmp;
	env->j++;
	return ("sb");
}

char	*ss(t_env *env)
{
	sa(env);
	sb(env);
	env->j--;
	return ("ss");
}
