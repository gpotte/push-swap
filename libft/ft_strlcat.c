/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotte <gpotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:15:32 by gpotte            #+#    #+#             */
/*   Updated: 2015/11/28 15:44:41 by gpotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	char	*dst_end;

	src_len = ft_strlen(src);
	dst_end = ft_memchr(dst, '\0', size);
	if (!dst_end)
		return (size + src_len);
	dst_len = dst_end - dst;
	if (!ft_memccpy(dst_end, src, 0, size - dst_len - 1))
		dst[size - 1] = '\0';
	return (dst_len + src_len);
}
