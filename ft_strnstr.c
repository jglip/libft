/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:38:41 by jglip             #+#    #+#             */
/*   Updated: 2021/10/18 20:17:57 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (ndl == NULL || ft_strlen(ndl) == 0)
		return ((char *)hstk);
	i = 0;
	while (hstk[i] != '\0' && i < len)
	{
		if (hstk[i] == ndl[0])
		{
			j = 0;
			while (i + j < len)
			{
				if (hstk[i + j] != ndl[j])
					break ;
				if (ndl[j + 1] == '\0')
					return ((char *)hstk + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
