/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:18:01 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/24 21:54:54 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;
	unsigned char	cc;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == c && (i + 1 < n))
		{
			cdst[i] = csrc[i];
			return (&(cdst[i + 1]));
		}
		else
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (NULL);
}
