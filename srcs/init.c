/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 17:44:05 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 14:41:03 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_all(t_env *env, int ac)
{
	if (!(env->a_list = malloc(sizeof(int) * ac - 1)) ||
			!(env->b_list = malloc(sizeof(int) * ac - 1)) ||
			!(env->sorted = malloc(sizeof(int) * ac - 1)))
		ft_error();
	env->a_len = ac - 1;
	env->sorted_len = ac - 1;
	env->b_len = 0;
	env->i = env->a_len - 1;
	if (env->a_len <= 5)
		env->i = 0;
	env->j = 0;
}
