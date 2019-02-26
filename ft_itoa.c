/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:22:57 by mstratu           #+#    #+#             */
/*   Updated: 2019/02/25 23:24:38 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int			get_len(int x)
{
	int		c;

	if (x == 0)
		return (1);
	c = 0;
	if (x < 0)
		c = 1;
	while (x)
	{
		c++;
		x /= 10;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		j;

	j = get_len(n);
	fresh = (char *)malloc(sizeof(char) * (j + 1));
	if (!fresh)
		return (NULL);
	fresh[j] = '\0';
	j--;
	if (n < 0)
	{
		fresh[0] = '-';
		n = n * (-1);
	}
	while (n)
	{
		fresh[j] = ((n % 10) + '0');
		n /= 10;
		j--;
	}
	return (fresh);
}
