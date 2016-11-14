/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:23:40 by gpotte            #+#    #+#             */
/*   Updated: 2016/06/21 12:54:47 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_str_isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && i == 0)
			i++;
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		i++;
	}
	return (0);
}
