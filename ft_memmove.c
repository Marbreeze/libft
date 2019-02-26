/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:55:36 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/24 23:21:51 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		g;
	size_t		i;
	char		*cdst;
	char		*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	g = 0;
	while (i < n && csrc[g])
	{
		cdst[i] = csrc[g];
		i++;
		g++;
	}
	cdst[i] = '\0';
	return (dst);
}
