/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:44:05 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:45:25 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	int		j;
	char	*fresh;

	i = 0;
	j = 0;
	n = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		++i;
	while (s[n] && (s[n] == ' ' || s[n] == '\n' || s[n] == '\t'))
		n--;
	fresh = (char *)malloc(sizeof(char) * (n - i + 2));
	if (!fresh)
		return (NULL);
	while (i <= n)
	{
		fresh[j] = s[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}