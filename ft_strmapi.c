/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:41:12 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 22:48:34 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(int) * (ft_strlen(s)));
	if (!s || !f || !fresh)
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(i, &(s[i]));
		i++;
	}
	return (fresh);
}
