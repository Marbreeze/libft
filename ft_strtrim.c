/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:44:05 by mstratu           #+#    #+#             */
/*   Updated: 2019/03/06 16:38:13 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char			*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	int		j;
	char	*fresh;

	i = 0;
	j = 0;
	n = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		++i;
	while (s[n] && n >= i && (s[n] == ' ' || s[n] == '\n' || s[n] == '\t'))
		n--;
	fresh = (char *)ft_memalloc(sizeof(char) * (n - i + 2));
	if (!fresh)
		return (NULL);
	while (i <= n && s[i])
	{
		fresh[j] = s[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
