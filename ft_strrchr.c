/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:09:19 by jglip             #+#    #+#             */
/*   Updated: 2021/10/17 10:42:01 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = ft_strlen(s);
	res = 0;
	if (c > 256)
		c = c % 256;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			res = (char *)s + i;
			break ;
		}
		i--;
	}
	return (res);
}
