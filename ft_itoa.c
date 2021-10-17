/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:48:32 by jglip             #+#    #+#             */
/*   Updated: 2021/10/16 10:43:15 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nmb_len(long long int n)
{
	int	l;

	l = 1;
	if (n < 0)
		n = -n;
	while (n > 10)
	{
		l += 1;
		n /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int				l;
	char			*s;
	int				neg;
	long long int	nbr;

	neg = 0;
	nbr = n;
	if (nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	l = nmb_len(nbr);
	s = (char *)malloc(sizeof(char) * l + neg + 1);
	if (s == (void *)0)
		return ((void *)0);
	if (neg)
		s[0] = '-';
	s[l + neg] = '\0';
	while (l > 0)
	{
		s[l + neg - 1] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		l--;
	}
	return (s);
}
