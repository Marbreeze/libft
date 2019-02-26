/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 10:14:35 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 10:51:21 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	int		i;
	int		g;

	i = 0;
	g = 0;
	while (src[g])
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';
	return (dest);
}