/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:37:54 by gpotte            #+#    #+#             */
/*   Updated: 2015/11/27 12:38:59 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
