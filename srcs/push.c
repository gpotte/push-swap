/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:29:50 by gpotte            #+#    #+#             */
/*   Updated: 2016/10/24 10:31:50 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*pa(t_env *env)
{
	if (env->b_len == 0)
		return ("");
	env->a_list[env->a_len] = env->b_list[env->b_len - 1];
	env->b_len--;
	env->a_len++;
	env->j++;
	return ("pa");
}

char	*pb(t_env *env)
{
	if (env->a_len == 0)
		return ("");
	env->b_list[env->b_len] = env->a_list[env->a_len - 1];
	env->a_len--;
	env->b_len++;
	env->j++;
	return ("pb");
}
