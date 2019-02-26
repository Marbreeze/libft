/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:43:24 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:43:31 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (src[g])
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	return (dest);
}
