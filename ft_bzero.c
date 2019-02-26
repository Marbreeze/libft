/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:53:18 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:40:13 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (len == 0)
		return ;
	else
	{
		while (len > 0)
		{
			len--;
			str[i] = 0;
			i++;
		}
	}
}
