/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:48:49 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 22:52:18 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;
	int		g;

	i = 0;
	g = 0;
	fresh = ((char *)malloc(sizeof(char) * ft_strlen(s)));
	if (!s || !f || !fresh)
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(&(s[i]));
		i++;
	}
	return (fresh);
}
