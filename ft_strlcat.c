/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:53:00 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:01:11 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		g;

	dst_len = 0;
	g = 0;
	while (dst[dst_len])
	{
		dst_len++;
	}
	dst_len++;
	while (dst_len + g < dstsize && src[g])
	{
		dst[dst_len + g] = src[g];
		g++;
	}
	return (dst_len + g);
}
