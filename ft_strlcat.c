/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:26 by jglip             #+#    #+#             */
/*   Updated: 2021/10/18 20:02:13 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst,
		const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (dstsize > 0 && len_dst < dstsize)
	{
		while (src[i] != '\0' && i < dstsize - len_dst - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
