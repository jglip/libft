/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:26 by jglip             #+#    #+#             */
/*   Updated: 2021/10/16 18:07:46 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst,
// 		const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (dstsize > 0)
// 	{
// 		while (dst[j] != '\0')
// 			j++;
// 		while (src[i] != '\0')
// 		{
// 			if (i <= dstsize - j - 2)
// 				dst[j + i] = src[i];
// 			else if (i == dstsize - j - 1)
// 				dst[j + i] = '\0';
// 			i++;
// 		}
// 	}
// 	return (i + j);
// }
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;

	srclen = ft_strlen(src);
	if ((destlen = ft_strlen(dest)) > size)
		destlen = size;
	if (destlen == size)
		return (size + srclen);
	if (srclen < size - destlen)
	{
		ft_memcpy(dest + destlen, src, srclen);
		dest[destlen + srclen] = '\0';
	}
	else
	{
		ft_memcpy(dest + destlen, src, size - destlen - 1);
		dest[size - 1] = '\0';
	}
	return (destlen + srclen);
}