/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:00:21 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:36:51 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i])
	{
		if (s[i] == c)
			return (&(s[i]));
		i--;
	}
	if (s[i] == c)
		return (&(s[i]));
	return (NULL);
}
