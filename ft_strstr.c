/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 15:34:38 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 15:45:36 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		g;
	int		j;

	i = 0;
	g = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[g])
		{
			j = i;
			while (needle[g] && haystack[j] == needle[g])
			{
				j++;
				g++;
			}
			if (needle[g] == '\0')
				return (&(haystack[i]));
		}
		i++;
	}
	return (NULL);
}
