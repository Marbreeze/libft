/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:36:59 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 22:40:52 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		g;
	size_t	i;

	i = 0;
	g = 0;
	while (dest[i])
		i++;
	while (i < n && src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	return (dest);
}
