/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:52:48 by jglip             #+#    #+#             */
/*   Updated: 2021/10/17 17:57:16 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	size_t	i;

// 	if ((char *)src == NULL || (char *)dst == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		((char *)dst)[i] = ((char *)src)[i];
// 		i++;
// 	}
// 	return ((void *)dst);
// }

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	unsigned int	i;
// 	char			*dest;
// 	const char		*sourc;

// 	if (src == NULL || dst == NULL)
// 		return (NULL);
// 	dest = dst;
// 	sourc = src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		dest[i] = sourc[i];
// 		i++;
// 	}
// 	return (dst);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dest && !src)
		return (0);
	dp = dest;
	sp = src;
	while (n-- > 0)
	{
		*dp++ = *sp++;
	}
	return (dest);
}
