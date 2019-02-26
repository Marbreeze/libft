/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:46:32 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:48:06 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	g;

	i = 0;
	if (needle[0] == '\0' || !len)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (needle[0] == haystack[i])
		{
			j = i;
			g = 0;
			while (needle[g] == haystack[j] && g < len)
			{
				g++;
				j++;
			}
			if (g == len)
				return (&(haystack[i]));
		}
		i++;
	}
	return (NULL);
}
