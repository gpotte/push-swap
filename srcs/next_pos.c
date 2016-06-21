/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 14:13:20 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 14:50:03 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	next_pos(t_env *env, int *list, int i)
{
	int tmp;

	tmp = 0;
	while (list[tmp] != env->sorted[i])
		tmp++;
	return (tmp);
}
